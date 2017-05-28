#include "leitor.h"

//declaração de funções
estrClasse ler(char * path_name) {
  estrClasse class_inter;

  FILE * p_arq = fopen (path_name, "rw");
  if (p_arq != NULL) {

    //TODO: percorrer o arquivo
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
