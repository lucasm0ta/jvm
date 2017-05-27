#include <stdio.h>
/*!
 * Main function. Receives a ".class" document as parameter to be interpreted.
 * @param  argc Counter o arv items.
 * @param  argv Items received as parameters.
 * @return      Function code.
 */
int main (int argc, char *argv[]) {
    if (argc >= 2) {
        printf("%s\n", argv[1]);
        FILE * pFile;
        pFile = fopen ("myfile.txt", "r");
        if (pFile != NULL) {
            fputs ("fopen example", pFile);
            fclose (pFile);
        }
    }
}
