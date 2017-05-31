#include <stdio.h>
#include <string.h>
#include "leitor.h"
#include "exibidor.h"

int main (int argc, char *argv[]) {
    char file_path[126];
    if (argc == 2) { // Second argument is the .class path
        strcpy(file_path, argv[1]);
    }
    else { // No arguments
        printf("Class file name: ");
        scanf("%125s", file_path); // Check if input is valid?
    }
    //TODO: Case where user types input and output file

    FILE * file;
    file = fopen(file_path, "r");
    if(file != NULL) {
        fseek(file, 0, SEEK_END); // Goes to end of file
        long size = ftell(file); // Tell size of file
        fseek(file, 0, SEEK_SET);
        printf("File size: %ld bytes\n", size);
        fclose(file);

        Class class_file = ler(file_path);
        printBasicStructure(class_file);

        // Cleaning up
        //TODO: Put this into a function in the class.c file
        int i = 0;
        for(i = 0; i < class_file.constant_pool_count; i++) {
            freeEntry(&class_file.constant_pool[i]);
        }
        free(class_file.constant_pool);

    }
    else {
        printf("File %s does not exist\n", file_path);
    }
}
