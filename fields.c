#include "fields.h"

// Auxiliary functions

void printAllFields(field_info ** all_fields, u2 size){
    for (int i = 0; i < size; i++) {
        field_info *info = all_fields[i];
        printf("access_flags:  %d\n",info->access_flags);

        printf("name_index:  %d\n",info->name_index);

        printf("descriptor_index:  %d\n",info->descriptor_index);

        printf("attributes_count:  %d\n",info->attributes_count);

        for (int j = 0; j < info->attributes_count; j++) {
            attribute_info attribute = info->attributes[j];
            printf("attribute_name_index:  %d\n", attribute.attribute_name_index);

            printf("attribute_length:  %d\n", attribute.attribute_length);

            for (int k = 0; k < attribute.attribute_length; k++) {
                printf("info:  %d\n", attribute.info[k]);
            }

        }
    }
}
