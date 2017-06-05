#include "methods.h"

#include <stdio.h>

void printAllMethods(method_info *methods, u2 size) {
    printf("\nMethods Structure\n---------------\n");
    for (int i = 0; i < size; i++) {
        printf("\tMethod No %d\n", i+1);
        method_info method = methods[i];
        printf("\t\tAccess Flags:  %x\n", method.access_flags);

        printf("\t\tName Index:  %d\n", method.name_index);

        printf("\t\tDescriptor Index:  %d\n", method.descriptor_index);

        printf("\t\tAttributes Count:  %d\n", method.attributes_count);
        for (int j = 0; j < method.attributes_count; j++) {
            printf("\t\t\tAttribute %d\n", j);
            attribute_info attribute = method.attributes[j];
            printf("\t\t\t\tAttribute Name Index:  %d\n", attribute.attribute_name_index);
            printf("\t\t\t\tAttribute Length:  %d\n", attribute.attribute_length);
            /*for (int k = 0; k < attribute.attribute_length; k++) {
                printf("\t\t\t\tInfo:  %d\n", attribute.info[k]);
            }*/

            printf("\t\t\t-----------------\n");
        }
        printf("\t-----------------\n");
    }
}
