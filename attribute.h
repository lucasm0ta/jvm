#include "util.h"

#ifndef ATTRIBUTE_H
#define ATTRIBUTE_H
 /*
  * information of a field's attribute
  */
 typedef struct attribute_info {
     u2 attribute_name_index;
     u4 attribute_length;
     u1 * info;
 } attribute_info;


 #endif // ATTRIBUTE_H
