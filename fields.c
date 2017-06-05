#include "fields.h"

// Auxiliary functions

void printAllFields(field_info *all_fields, u2 size){
    for (int i = 0; i < size; i++) {
        printf("Field No %d\n", i+1);
        field_info info = all_fields[i];
        printf("\tAccess_flags:  %d\n",info.access_flags);

        printf("\tname_index:  %d\n",info.name_index);

        printf("\tdescriptor_index:  %d\n",info.descriptor_index);

        printf("\tattributes_count:  %d\n",info.attributes_count);

        for (int j = 0; j < info.attributes_count; j++) {
            printf("\tAttribute %d\n", j);
            attribute_info attribute = info.attributes[j];
            printf("\t\tAttribute_name_index:  %d\n", attribute.attribute_name_index);

            printf("\t\tAttribute_length:  %d\n", attribute.attribute_length);

            for (int k = 0; k < attribute.attribute_length; k++) {
                printf("\t\t\tinfo:  %d\n", attribute.info[k]);
            }

        }
    }
}
