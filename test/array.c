#include "array.h"

u4 getSize(arrayEntry *array){
    return array->size;
}

u4 getReference(arrayEntry *array){
    return array->reference;
}

void setReference(u4* newReference, arrayEntry *array){
    array->reference = (u4) newReference;
}

void setSize(u4* newSize, arrayEntry *array){
    array->size = (u4) newSize;
}
