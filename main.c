#include <stdio.h>
#include <string.h>
#include "leitor.h"
#include "exibidor.h"
#include "main.h"

Class class_file;
char file_path[126];

int main (int argc, char *argv[]) {
    if (argc == 2) { // Second argument is the .class path
        strcpy(file_path, argv[1]);
    } else { // No arguments
        printf("Class file name: ");
        scanf("%125s", file_path); // Check if input is valid?
    }

    FILE * file;
    file = fopen(file_path, "r");
    if(file != NULL) {
        fseek(file, 0, SEEK_END); // Goes to end of file
        long size = ftell(file); // Tell size of file
        fseek(file, 0, SEEK_SET);
        printf("File size: %ld bytes\n", size);
        fclose(file);
        menu ();
    } else {
        printf("File %s does not exist\n", file_path);
    }

}

int menu (){
    int opt = 0;
    system("clear || cls");
    printf("\t   _____                    _              _____                                       \n");
    printf("\t  / ____|                  (_)            / ____|                                      \n");
    printf("\t | |     _ __ _   _ _______ _ _ __ ___   | |     __ _ _ __ ___  _ __   ___  __ _  ___  \n");
    printf("\t | |    | '__| | | |_  / _ \\ | '__/ _ \\  | |    / _` | '_ ` _ \\| '_ \\ / _ \\/ _` |/ _ \\ \n");
    printf("\t | |____| |  | |_| |/ /  __/ | | | (_) | | |___| (_| | | | | | | |_) |  __/ (_| | (_) |\n");
    printf("\t  \\_____|_|   \\__,_/___\\___|_|_|  \\___/   \\_____\\__,_|_| |_| |_| .__/ \\___|\\__,_|\\___/ \n");
    printf("\t                                                               | |                     \n");
    printf("\t                                                               |_|                     \n");
    printf("pressione uma tecla para continuar");
    getchar();

    system("clear || cls");
    printf("\t===============================================\n");
    printf("\t==================== MENU =====================\n");
    printf("\t===============================================\n");
    printf("\t======= 1) Mostrar conteúdo do .class =========\n");
    printf("\t======= 2) Executar interpretador     =========\n");
    printf("\t===============================================\n");
    printf("\t===============================================\n");
    printf("\t>>");
    scanf("%d",&opt);
    switch(opt){
        case 1:
            class_file = ler(file_path);
            printBasicStructure(class_file);
            // Cleaning up
            //TODO: Put this into a function in the class.c file
            int i = 0;
            for(i = 0; i < class_file.constant_pool_count-1; i++) {
                freeEntry(&class_file.constant_pool[i]);
            }
            free(class_file.constant_pool);
            return 0;
        case 2:
            printf("\tAcessando JVM...\n");
            return 0;
    }

}
