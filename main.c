#include <stdio.h>
#include "leitor.c"

int main (int argc, char *argv[]) {
    if (argc >= 2) { // Second argument is the .class path
        printf("%s\n", argv[1]);
        FILE * file;
        file = fopen (argv[1], "r");
        if (file != NULL) {
            int bytes; // Number of bytes in file
            for (bytes = 0; getc(file) != EOF; ++bytes);
            printf("File has: %d bytes\n", bytes);
            fclose (file);
        }
    }
}
