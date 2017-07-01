#include <stdint.h>

#ifndef
#define "ARRAY_H"

typedef struct arrayEntry{
	u4 size;
	u4 reference;
}arrayEntry;

/**
* Getter for the element size of the struct arrayEntry
* @param  array struct who owns the element
* @return the size of the array
*/
u4 getSize(arrayEntry *array);
/**
* Getter for the element reference of the struct arrayEntry
* @param  array struct who owns the element
* @return the reference of the array
*/

u4 getReference(arrayEntry *array);
/**
* Setter for the element reference of the struct arrayEntry
* @param the new value of the reference element
* @param array struct who owns the element
*/
void setReference(u4* arrayRef, arrayEntry *array);
/**
* Setter for the element size of the struct arrayEntry
* @param the new value of the size element
* @param array struct who owns the element
*/
void setSize(u4 size, arrayEntry *array);

#endif
