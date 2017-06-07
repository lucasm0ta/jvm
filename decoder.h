
#ifndef DECODER_H
#define DECODER_H

#include <string.h> 

#define NOME_INSTRUCAO 30 

// struct para decodificar um opcode no nome da instrucao conveniente, contem tb o numero de operandos que a instrucao le  
typedef struct decoder
{
    // nome da instrucao 
    char instrucao[NOME_INSTRUCAO];

    // numero de bytes que seguem a instrucao 
    int bytes; 
}decoder; 

// funcao que coloca o nome das strings no decodificador, juntamente com a qtd em bytes 
void decoder_init(decoder dec[]);

#endif 