#include "exibidor.h"


void mostrar(Class *class) {

}

void printBasicStructure(Class class) {
    printf("General Info\n");
    printf("Magic Number: %x\n", class.magic_number);
    printf("Minor Version: %d\n", class.minor_version);
    printf("Major Version: %d\n", class.major_version);
    printf("Constant Pool Counter: %d\n", class.constant_pool_count);
    printf("\nConstant Pool Structure:\n");
    printf("--------------------------\n");
    int i;
    for(i = 0; i < class.constant_pool_count-1; i++) {
        printf("Entry No %d\n\n", i+1);
        printEntryInfo(class.constant_pool[i]);
        printf("--------------------------\n");
    }
    printf("Access Flags: %#06x\n", class.access_flags);
    printf("This Class: %d\n", class.this_class);
    printf("Super Class: %d\n", class.super_class);
    printf("Interfaces Count: %d\n", class.interfaces_count);
}
