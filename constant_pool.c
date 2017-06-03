#include "constant_pool.h"

// Auxiliary functions

void printClassInfo(u1** constant_pool, int index) {
    class_info* entry = (class_info *) constant_pool[index];
    printf("CONSTANT Class Info[%d]: \n", entry->tag);
    printf("Name Index: %d    ", entry->name_index);
    printUtf8String(constant_pool, entry->name_index);
    printf("\n");
}

void printFieldRefInfo(u1** constant_pool, int index) {
    fieldref_info *entry = (fieldref_info *) constant_pool[index];
    printf("CONSTANT Field Ref[%d]: \n", entry->tag);
    printf("Class Index: %d    ", entry->class_index);
    printUtf8String(constant_pool, entry->class_index);
    printf("\n");
    printf("Name And Type Index: %d    ", entry->name_and_type_index);
    printUtf8String(constant_pool, entry->name_and_type_index);
    printf("\n");
}

void printMethodRefInfo(u1** constant_pool, int index) {
    methodref_info *entry = (methodref_info *) constant_pool[index];
    printf("CONSTANT Method Ref[%d]: \n", entry->tag);
    printf("Class Index: %d    ", entry->class_index);
    printUtf8String(constant_pool, entry->class_index);
    printf("\n");
    printf("Name And Type Index: %d    ", entry->name_and_type_index);
    printUtf8String(constant_pool, entry->name_and_type_index);
    printf("\n");
}

void printInterfaceMethodRefInfo(u1** constant_pool, int index) {
    interfacemethodref_info *entry = (interfacemethodref_info *) constant_pool[index];
    printf("CONSTANT Interface Method Ref[%d]: \n", entry->tag);
    printf("Class Index: %d    ", entry->class_index);
    printUtf8String(constant_pool, entry->class_index);
    printf("\n");
    printf("Name And Type Index: %d    ", entry->name_and_type_index);
    printUtf8String(constant_pool, entry->name_and_type_index);
    printf("\n");
}

void printStringInfo(u1** constant_pool, int index) {
    string_info *entry = (string_info *) constant_pool[index];
    printf("CONSTANT String [%d]: \n", entry->tag);
    printf("String Index: %d    ", entry->string_index);
    printUtf8String(constant_pool, entry->string_index);
    printf("\n");
}

void printIntegerInfo(u1** constant_pool, int index) {
    integer_info *entry = (integer_info *) constant_pool[index];
    printf("CONSTANT Integer [%d]: \n", entry->tag);
    printf("Integer: %d", entry->bytes);
}

void printFloatInfo(u1** constant_pool, int index) {
    float_info *entry = (float_info *) constant_pool[index];
    printf("CONSTANT Float [%d]: \n", entry->tag);
    printf("Float: %f\n", (float)entry->bytes);
}

void printLongInfo(u1** constant_pool, int index) {
    long_info *entry = (long_info *) constant_pool[index];
    long value = ((long) entry->high_bytes << 32) + entry->low_bytes;
    printf("Long: %ld\n", value);
}

void printDoubleInfo(u1** constant_pool, int index) {
    double_info *entry = (double_info *) constant_pool[index];
    long value = ((long) entry->high_bytes << 32) + entry->low_bytes;
    printf("Double: %lf\n", (double) value);
}

void printNameAndTypeInfo(u1** constant_pool, int index) {
    name_and_type_info *entry = (name_and_type_info *) constant_pool[index];
    printf("CONSTANT Name And Type [%d]: \n", entry->tag);
    printf("Name Index: %d    ", entry->name_index);
    printUtf8String(constant_pool, entry->name_index);
    printf("\n");
    printf("Descriptor Index: %d    ", entry->descriptor_index);
    printUtf8String(constant_pool, entry->descriptor_index);
    printf("\n");
}

void printUtf8Info(u1** constant_pool, int index) {
    utf8_info *entry = (utf8_info *) constant_pool[index];
    printf("CONSTANT Utf8 [%d]: \n", entry->tag);
    printf("Length: %d\n", entry->length);
    printf("Text: ");
    int i;
    for(i = 0; i < entry->length; i++) {
        printf("%c", entry->bytes[i]);
    }
    printf("\n");
}

void printMethodHandleInfo(u1** constant_pool, int index) {
    method_handle_info * entry = (method_handle_info *) constant_pool[index];
    printf("CONSTANT Method Handle [%d]: \n", entry->tag);
    printf("Reference Kind: %d\n", entry->reference_kind);
    printf("Reference Index: %d\n", entry->reference_index);
}

void printMethodTypeInfo(u1** constant_pool, int index) {
    method_type_info* entry = (method_type_info *) constant_pool[index];
    printf("CONSTANT Method Type [%d]: \n", entry->tag);
    printf("DescriptorIndex: %d\n", entry->descriptor_index);
    printUtf8String(constant_pool, entry->descriptor_index);
    printf("\n");
}

void printInvokeDynamicInfo(u1** constant_pool, int index) {
    invoke_dynamic_info* entry = (invoke_dynamic_info *) constant_pool[index];
    printf("CONSTANT Invoke Dynamic [%d]: \n", entry->tag);
    printf("Bootstrap: %d\n", entry->bootstrap_method_attr_index);
    printf("Name and type: %d\n", entry->name_and_type_index);
    printUtf8String(constant_pool, entry->name_and_type_index);
    printf("\n");
}

// ------------

void printEntryInfo(u1 **constant_pool, int index) {
    switch(constant_pool[index][0]) { // TAG
        case 1: // utf8_info
            printUtf8Info(constant_pool, index);
            break;
        case 3: // integer_info
            printIntegerInfo(constant_pool, index);
            break;
        case 4: // float_info
            printFloatInfo(constant_pool, index);
            break;
        case 5: // long_info
            printLongInfo(constant_pool, index);
            break;
        case 6: // double_info
            printDoubleInfo(constant_pool, index);
            break;
        case 7: // class_info
            printClassInfo(constant_pool, index);
            break;
        case 8: // string_info
            printStringInfo(constant_pool, index);
            break;
        case 9: // fieldref_info
            printFieldRefInfo(constant_pool, index);
            break;
        case 10: // methodref_info
            printMethodRefInfo(constant_pool, index);
            break;
        case 11: // interfacemethodref_info
            printInterfaceMethodRefInfo(constant_pool, index);
            break;
        case 12: // name_and_type_info
            printNameAndTypeInfo(constant_pool, index);
            break;
        case 15: // method_handle_info
            printMethodHandleInfo(constant_pool, index);
            break;
        case 16: // method_type_info
            printMethodTypeInfo(constant_pool, index);
            break;
        case 18: // invoke_dynamic_info
            printInvokeDynamicInfo(constant_pool, index);
            break;
        default:
            printf("Error printing constant pool entry\n");
    }
}

void printConstantPool(u1** constant_pool, int size) {
    printf("\nConstant Pool Structure:\n");
    printf("--------------------------\n");
    int i;
    for(i = 0; i < size; i++) {
        printf("Entry No %d\n\n", i+1);
        printEntryInfo(constant_pool, i);
        printf("--------------------------\n");
    }
}

void printUtf8String(u1** constant_pool, int index) {
    index--;
    int tag = constant_pool[index][0];
    if(tag == 1) { // utf8 already
        utf8_info* entry = (utf8_info *) constant_pool[index];
        printf("<");
        int i;
        for(i = 0; i < entry->length; i++) {
            printf("%c", entry->bytes[i]);
        }
        printf(">");
    }
    else if(tag ==  7) { // class_info
        class_info* entry = (class_info *) constant_pool[index];
        printUtf8String(constant_pool, entry->name_index);
    }
    else if(tag == 12) { // name_and_type
        name_and_type_info* entry = (name_and_type_info *) constant_pool[index];

        printUtf8String(constant_pool, entry->name_index);
        printUtf8String(constant_pool, entry->descriptor_index);
    }
}

void freeEntry(u1** entry) {
    if(*entry != NULL) {
        free(*entry);
        *entry = NULL;
    }
}
