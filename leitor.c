#include "leitor.h"

//declaração de funções
Class ler(char * path_name) {
    Class class_inter; // Pointer?

    FILE * p_arq = fopen (path_name, "rw");
    if (p_arq != NULL) {
        class_inter.magic_number = getDW(p_arq);
        class_inter.minor_version = getW(p_arq);
        class_inter.major_version = getW(p_arq);
        class_inter.constant_pool_count = getW(p_arq);

        // Array that will hold the constant pool entries
        class_inter.constant_pool =
                (u1 **) malloc(sizeof(u1*) * (class_inter.constant_pool_count-1));
        int i;
        // Creating the entries
        for(i = 0; i < class_inter.constant_pool_count-1; i++) {
            class_inter.constant_pool[i] = readConstantPoolEntry(p_arq);
            // In case its double or float
            if(class_inter.constant_pool[i][0] == 5 || class_inter.constant_pool[i][0] == 6) {
                i++;
            }
        }

        class_inter.access_flags = getW(p_arq);
        class_inter.this_class = getW(p_arq);
        class_inter.super_class = getW(p_arq);
        class_inter.interfaces_count = getW(p_arq);

        class_inter.interfaces =
                (u2 *) malloc(sizeof(u2) * class_inter.interfaces_count);

        for (i = 0; i < class_inter.interfaces_count; i++) {
            class_inter.interfaces[i] = getW(p_arq);
        }

        class_inter.fields_count = getW(p_arq);

        class_inter.fields =
                (field_info *) malloc(sizeof(field_info) * class_inter.fields_count);

        for (i = 0; i < class_inter.fields_count; i++) {
             readFieldEntry(&class_inter.fields[i], p_arq);
        }


        class_inter.methods_count = getW(p_arq);
        class_inter.methods = (method_info *) malloc(sizeof(method_info) * class_inter.methods_count);
        for (i = 0; i < class_inter.methods_count; i++) {
             readMethodEntry(&class_inter.methods[i], p_arq);
        }

        // Temporary
        fclose(p_arq);
        return class_inter; // Works untill here
        //----------

        class_inter.methods_count = getW(p_arq);

        class_inter.attributes_count = getW(p_arq);

        //TODO: pegar os atributos
    }
    fclose (p_arq);
    return class_inter;
}


u1 getB(FILE * pa){
    u1 ret;
    ret = getc(pa);
    return ret;
}

u2 getW(FILE * pa){
    u2 ret;
    ret = getc(pa);
    ret = ret << 8 | getc(pa);
    return ret;
}

u4 getDW(FILE * pa){
    u4 ret;
    ret = getc(pa);
    ret = ret << 8 | getc(pa);
    ret = ret << 8 | getc(pa);
    ret = ret << 8 | getc(pa);
    return ret;
}

u1 *readBytesAsArray(FILE *file, int num_of_bytes) {
    u1* byte_array = (u1 *) malloc(sizeof(u1) * num_of_bytes);
    int i;
    for(i = 0; i < num_of_bytes; i++) {
        byte_array[i] = getB(file);
    }
    return byte_array;
}

/*!
 * utf8 is a special case since it has a dynamic allocated array with its size
 * specified in the struct itself
 */
static u1 *readUtf8AsArray(FILE* file) {
    u1 tag = getB(file);
    u2 length = getW(file);
    // allocating space for the struct and the bytes in the string
    utf8_info* byte_array = (utf8_info *) malloc(sizeof(utf8_info) + length*sizeof(u1));
    byte_array->tag = tag;
    byte_array->length = length;
    int i;
    for(i = 0; i < length; i++) {
        byte_array->bytes[i] = getB(file);
    }
    return (u1 *) byte_array;
}

void readFieldEntry(field_info *field, FILE * file){
    field->access_flags = getW(file);
    field->name_index = getW(file);
    field->descriptor_index = getW(file);
    field->attributes_count = getW(file);
    field->attributes = (attribute_info *) malloc(sizeof(attribute_info) * field->attributes_count);

    for (int i = 0; i < field->attributes_count; i++) {
        readAttributesInfoEntry(&field->attributes[i], file);
    }
}

void readMethodEntry(method_info *method, FILE * file){
    method->access_flags = getW(file);
    method->name_index = getW(file);
    method->descriptor_index = getW(file);
    method->attributes_count = getW(file);
    method->attributes = (attribute_info *) malloc(sizeof(attribute_info) * method->attributes_count);
    attribute_info *attributes = method->attributes;
    for(int j = 0; j < method->attributes_count; j++){
        readAttributesInfoEntry(&attributes[j], file);
    }
}

void readAttributesInfoEntry(attribute_info *attribute, FILE * file){
    attribute->attribute_name_index = getW(file);
    attribute->attribute_length = getDW(file);
    attribute->info = (u1 *) malloc(sizeof(u1) * attribute->attribute_length);

    for (size_t j = 0; j < attribute->attribute_length; j++) {
        attribute->info[j] = getB(file);
    }
}

u1 *readConstantPoolEntry(FILE * file) {
    u1 tag = getB(file);
    // We need the tag here and not getting the tag in the reader functions
    // would be kinda ugly so we set the file pointer a byte back.
    fseek(file, -1, SEEK_CUR);
    u1 *info;
    switch(tag) {
        case 1: // utf8_info
            info = readUtf8AsArray(file);
            break;
        case 3: // integer_info
            info = readBytesAsArray(file, 5);
            break;
        case 4: // float_info
            info = readBytesAsArray(file, 5);
            break;
        case 5: // long_info
            info = readBytesAsArray(file, 9);
            break;
        case 6: // double_info
            info = readBytesAsArray(file, 9);
            break;
        case 7: // class_info
            info = readBytesAsArray(file, 3);
            break;
        case 8: // string_ingo
            info = readBytesAsArray(file, 3);
            break;
        case 9: // fieldref_info
            info = readBytesAsArray(file, 5);
            break;
        case 10: // methodref_info
            info = readBytesAsArray(file, 5);
            break;
        case 11: // interfacemethodref_info
            info = readBytesAsArray(file, 5);
            break;
        case 12: // name_and_type_info
            info = readBytesAsArray(file, 5);
            break;
        case 15: // method_handle_info
            info = readBytesAsArray(file, 4);
            break;
        case 16: // method_type_info
            info = readBytesAsArray(file, 3);
            break;
        case 18: // invoke_dynamic_info
            info = readBytesAsArray(file, 5);
            break;
    }
    return info;
}
