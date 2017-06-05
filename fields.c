#include "fields.h"

// Auxiliary functions

void printAllFields(field_info *all_fields, u2 size){
    printf("\nFields Structure\n---------------\n");
    for (int i = 0; i < size; i++) {
        printf("\tField No %d\n", i+1);
        field_info info = all_fields[i];
        printf("\t\tAccess Flags:  %x\n",info.access_flags);

        printf("\t\tName Index:  %d\n",info.name_index);

        printf("\t\tDescriptor Index:  %d\n",info.descriptor_index);

        printf("\t\tAttributes Count:  %d\n",info.attributes_count);

        for (int j = 0; j < info.attributes_count; j++) {
            printf("\t\tAttribute %d\n", j);
            attribute_info attribute = info.attributes[j];
            printf("\t\t\tAttribute Name Index:  %d\n", attribute.attribute_name_index);

            printf("\t\t\tAttribute Length:  %d\n", attribute.attribute_length);

            for (int k = 0; k < attribute.attribute_length; k++) {
                printf("\t\t\t\tInfo:  %d\n", attribute.info[k]);
            }
        }
        printf("-----------------\n");
    }
}
