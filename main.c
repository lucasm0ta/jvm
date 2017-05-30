#include <stdio.h>
#include "leitor.h"
#include "exibidor.h"

int main (int argc, char *argv[]) {
    if (argc == 2) { // Second argument is the .class path
        printf("%s\n", argv[1]);
        FILE * file;
        file = fopen (argv[1], "r");
        if (file != NULL) {
            int bytes; // Number of bytes in file
            for (bytes = 0; getc(file) != EOF; ++bytes);
            printf("File has: %d bytes\n", bytes);
            fclose (file);
        }
        else {
            printf("File %s does not exist\n", argv[1]);
        }
    }
    else { // No arguments
        char file_path[126];
        printf("Class file name: ");
        scanf("%125s", file_path); // Check if input is valid?
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

        }
        else {
            printf("File %s does not exist\n", file_path);
        }
    }
}
