#include "methods.h"
#include "decoder.h"

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

        printAllAttributes(method.attributes, method.attributes_count);
    }
}

void printAllAttributes(attribute_info *attributes, u2 size) {
    decoder dec[256];
    decoder_init(dec);

    for (int i = 0; i < size; i++) {
        printf("\t\t\tAttribute %d\n", i);
        attribute_info attribute = attributes[i];
        printf("\t\t\t\tAttribute Name Index:  %d\n", attribute.attribute_name_index);
        int tamanho_attr = attribute.attribute_length;
        printf("\t\t\t\tAttribute Length:  %d\n", tamanho_attr  );
        for (int k = 0; k < attribute.attribute_length; k++) {
            int opcode = attribute.info[k];
            printf("\t\t\t\tInfo:  %d \t%s\n", opcode, dec[opcode].instrucao);
        }

        printf("\t\t\t-----------------\n");
    }
}
