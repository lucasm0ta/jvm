#include "exibidor.h"

void mostrar(Class *class) {

}

void printBasicStructure(Class class) {
    printf("General Info\n");
    printf("Magic Number: %x\n", class.magic_number);
    printf("Minor Version: %d\n", class.minor_version);
    printf("Major Version: %d\n", class.major_version);
    printf("Constant Pool Counter: %d\n", class.constant_pool_count);
}
