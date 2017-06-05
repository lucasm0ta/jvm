#include "exibidor.h"


void mostrar(Class *class) {

}

// Auxiliar Function

// Prints the access details
void showAccess(int access_flag) {
    if(access_flag & 0x0001) {
        printf("public; ");
    }
    if(access_flag & 0x0010) {
        printf("final; ");
    }
    if(access_flag & 0x0020) {
        printf("super; ");
    }
    if(access_flag & 0x0200) {
        printf("interface; ");
    }
    if(access_flag & 0x0400) {
        printf("abstract; ");
    }
    if(access_flag & 0x1000) {
        printf("syntethic; ");
    }
    if(access_flag & 0x2000) {
        printf("annotation; ");
    }
    if(access_flag & 0x4000) {
        printf("enum; ");
    }
    printf("\n");
}

void printBasicStructure(Class class) {
    printf("General Info\n");
    printf("Magic Number: %x\n", class.magic_number);
    printf("Minor Version: %d\n", class.minor_version);
    printf("Major Version: %d\n", class.major_version);
    printf("Constant Pool Counter: %d\n", class.constant_pool_count);
    printConstantPool(class.constant_pool, class.constant_pool_count-1);
    printf("Access Flags: %#06x ", class.access_flags);
    showAccess(class.access_flags);
    printf("This Class: %d    ", class.this_class);
    printUtf8String(class.constant_pool, class.this_class);
    printf("\n");
    printf("Super Class: %d    ", class.super_class);
    printUtf8String(class.constant_pool, class.super_class);
    printf("\n");
    printf("Interfaces Count: %d\n", class.interfaces_count);
    int i;
    for(i = 0; i < class.interfaces_count; i++) {
        printf("Entry No %d\n", i+1);
        printf("Value: %d\n", class.interfaces[i]);
        printf("------------------------\n");
    }
    printf("Fields Count: %d\n", class.fields_count);

    printAllFields(class.fields, class.fields_count);
}
