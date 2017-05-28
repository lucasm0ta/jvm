#include <stdio.h>
#include <stdint.h>

#define u1 uint8_t
#define u2 uint16_t
#define u4 uint32_t

typedef struct cp_item {
  u1 tag;
  u1 info[];
} cp_info;

typedef struct class{
  u4 magic_number;

  u2 minor_version;

  u2 major_version;

  u2 constant_pool_count;

  //TODO: verificar como resolver isso
  //cp_info constant_pool[constant_pool_count - 1];

  u2 access_flags;

  u2 this_class;
  u2 super_class;

  u2 interfaces_count;

  //u2 interfaces[interfaces_count];

  u2 fields_count;
  //field_info fields[fields_count];

  u2 methods_count;
  //method_info methods[methods_count];

  u2 attributes_count;
  //attribute_info attributes[attributes_count];
} estrClasse;

//definição de funções
estrClasse ler(char * path_name);
u1 getB(FILE * pa);
u2 getW(FILE * pa);
u4 getDW(FILE * pa);



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
