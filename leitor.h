#include <stdio.h>
#include <stdlib.h>
#include "class.h"
#include "constant_pool.h"

#ifndef LEITOR_H
#define LEITOR_H

/*!
 * Read file into a Class structure.
 * @param  path_name [description]
 * @return           [description]
 */
Class ler(char *path_name);

/*!
 * Reads byte from file.
 * @param  file The file to have of its byte read from the sequence.
 * @return    The byte read from file.
 */
u1 getB(FILE *file);

/*!
 * Reads word from file.
 * @param  file The file to have of its word read from the sequence.
 * @return      The word read from file.
 */
u2 getW(FILE *file);

/*!
 * Reads double word from file.
 * @param  file The file to have of its double word read from the sequence.
 * @return      The word read from file.
 */
u4 getDW(FILE *file);

/*!
 * Reads a string of bytes from file size num_of_bytes.
 * Returns it as a pointer to a u1 array
 */
u1 *readBytesAsArray(FILE *file, int num_of_bytes);

/*!
 * Reads a single entry of the constant_pool
 * @param  file The file to be read from
 * @return      Returns a cp_info struct with its info.
 */
u1 *readConstantPoolEntry(FILE * file);

/*!
 * Reads a single field from an archive
 * @param  file The file to be read from
 * @return      Returns a field_info struct with its info.
 */
void readFieldEntry(field_info *field, FILE * file);

/*!
 * lalalal
 * @param field [description]
 * @param file  [description]
 */
void readMethodEntry(method_info *field, FILE * file);

void readAttributesInfoEntry(attribute_info *attribute, FILE * file);

#endif //LEITOR_H
