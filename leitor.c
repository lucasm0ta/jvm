#include "leitor.h"

//declaração de funções
estrClasse ler(char * path_name) {
    estrClasse class_inter;

    FILE * p_arq = fopen (path_name, "rw");
    if (p_arq != NULL) {
        class_inter.magic_number = getDW(p_arq);
        class_inter.minor_version = getW(p_arq);
        class_inter.major_version = getW(p_arq);
        class_inter.constant_pool_count = getW(p_arq);

        //TODO: pegar o constant_pool

        class_inter.access_flags = getW(p_arq);

        class_inter.this_class = getW(p_arq);

        class_inter.super_class = getW(p_arq);

        class_inter.interfaces_count = getW(p_arq);

        //TODO: pegar as interfaces

        class_inter.fields_count = getW(p_arq);

        class_inter.methods_count = getW(p_arq);

        class_inter.attributes_count = getW(p_arq);

        //TODO: pegar os atributos

    }



    fclose (p_arq);
}


u1 getB(FILE * pa){
    u1 ret;
    ret = getc(pa);
    return ret;
}

u2 getW(FILE * pa){
    u2 ret;
    ret = getc(pa);
    ret = ret << 8 | getc(pa);
    return ret;
}

u4 getDW(FILE * pa){
    u4 ret;
    ret = getc(pa);
    ret = ret << 8 | getc(pa);
    ret = ret << 8 | getc(pa);
    ret = ret << 8 | getc(pa);
    return ret;
}
