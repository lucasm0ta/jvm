#include "constant_pool.h"

// Auxiliary functions

void printClassInfo(u1* info) {
    class_info* entry = (class_info *) info;
    printf("CONSTANT Class Info[%d]: \n", entry->tag);
    printf("Name Index: %d\n", entry->name_index);
}

void printFieldRefInfo(u1* info) {
    fieldref_info *entry = (fieldref_info *) info;
    printf("CONSTANT Field Ref[%d]: \n", entry->tag);
    printf("Class Index: %d\n", entry->class_index);
    printf("Name And Type Index: %d\n", entry->name_and_type_index);
}

void printMethodRefInfo(u1* info) {
    methodref_info *entry = (methodref_info *) info;
    printf("CONSTANT Method Ref[%d]: \n", entry->tag);
    printf("Class Index: %d\n", entry->class_index);
    printf("Name And Type Index: %d\n", entry->name_and_type_index);
}

void printInterfaceMethodRefInfo(u1* info) {
    interfacemethodref_info *entry = (interfacemethodref_info *) info;
    printf("CONSTANT Interface Method Ref[%d]: \n", entry->tag);
    printf("Class Index: %d\n", entry->class_index);
    printf("Name And Type Index: %d\n", entry->name_and_type_index);
}

void printStringInfo(u1* info) {
    string_info *entry = (string_info *) info;
    printf("CONSTANT String [%d]: \n", entry->tag);
    printf("String Index: %d\n", entry->string_index);
}

void printIntegerInfo(u1* info) {
    integer_info *entry = (integer_info *) info;
    printf("CONSTANT Integer [%d]: \n", entry->tag);
    printf("Integer: %d", entry->bytes);
}

void printFloatInfo(u1* info) {
    float_info *entry = (float_info *) info;
    printf("CONSTANT Float [%d]: \n", entry->tag);
    printf("Float: %f\n", (float)entry->bytes);
}

void printLongInfo(u1* info) {
    long_info *entry = (long_info *) info;
    long value = ((long) entry->high_bytes << 32) + entry->low_bytes;
    printf("Long: %ld\n", value);
}

void printDoubleInfo(u1* info) {
    double_info *entry = (double_info *) info;
    long value = ((long) entry->high_bytes << 32) + entry->low_bytes;
    printf("Double: %lf\n", (double) value);
}

void printNameAndTypeInfo(u1* info) {
    name_and_type_info *entry = (name_and_type_info *) info;
    printf("CONSTANT Name And Type [%d]: \n", entry->tag);
    printf("Name Index: %d\n", entry->name_index);
    printf("Descriptor Index: %d\n", entry->descriptor_index);
}

void printUtf8Info(u1* info) {
    utf8_info *entry = (utf8_info *) info;
    printf("CONSTANT Utf8 [%d]: \n", entry->tag);
    printf("Length: %d\n", entry->length);
    printf("Text: ");
    int i;
    for(i = 0; i < entry->length; i++) {
        printf("%c", entry->bytes[i]);
    }
    printf("\n");
}

void printMethodHandleInfo(u1* info) {
    method_handle_info * entry = (method_handle_info *) info;
    printf("CONSTANT Method Handle [%d]: \n", entry->tag);
    printf("Reference Kind: %d\n", entry->reference_kind);
    printf("Reference Index: %d\n", entry->reference_index);
}

void printMethodTypeInfo(u1* info) {
    method_type_info* entry = (method_type_info *) info;
    printf("CONSTANT Method Type [%d]: \n", entry->tag);
    printf("DescriptorIndex: %d\n", entry->descriptor_index);
}

void printInvokeDynamicInfo(u1* info) {
    invoke_dynamic_info* entry = (invoke_dynamic_info *) info;
    printf("CONSTANT Invoke Dynamic [%d]: \n", entry->tag);
    printf("Bootstrap: %d\n", entry->bootstrap_method_attr_index);
    printf("Name and type: %d\n", entry->name_and_type_index);
}

// ------------

void printEntryInfo(u1 *entry) {
    switch(entry[0]) {
        case 1: // utf8_info
            printUtf8Info(entry);
            break;
        case 3: // integer_info
            printIntegerInfo(entry);
            break;
        case 4: // float_info
            printFloatInfo(entry);
            break;
        case 5: // long_info
            printLongInfo(entry);
            break;
        case 6: // double_info
            printDoubleInfo(entry);
            break;
        case 7: // class_info
            printClassInfo(entry);
            break;
        case 8: // string_info
            printStringInfo(entry);
            break;
        case 9: // fieldref_info
            printFieldRefInfo(entry);
            break;
        case 10: // methodref_info
            printMethodRefInfo(entry);
            break;
        case 11: // interfacemethodref_info
            printInterfaceMethodRefInfo(entry);
            break;
        case 12: // name_and_type_info
            printNameAndTypeInfo(entry);
            break;
        case 15: // method_handle_info
            printMethodHandleInfo(entry);
            break;
        case 16: // method_type_info
            printMethodTypeInfo(entry);
            break;
        case 18: // invoke_dynamic_info
            printInvokeDynamicInfo(entry);
            break;
        default:
            printf("Error printing constant pool entry\n");
    }
}

void freeEntry(u1** entry) {
    if(*entry != NULL) {
        free(*entry);
        *entry = NULL;
    }
}
