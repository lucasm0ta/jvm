/*!
 * Contains structs used as entries in the the fields
 *
 * The full documentation can be found at
 * https://docs.oracle.com/javase/specs/jvms/se7/html/jvms-4.html#jvms-4.4.6
 */

#include <stdio.h>
#include <stdlib.h>
#include "attribute.h"
#include "util.h"

#ifndef FIELDS_H
#define FIELDS_H

 /*!
  * Field information.
  */
 typedef struct field_info {
         /*!
          * Access flag to this info. Public, private, static or transient.
          */
         u2 access_flags;

         /*!
          * Unique name. Index of constant table.
          */
         u2 name_index;

         /*!
          * Valid index from constant pool.
          */
         u2 descriptor_index;

         /*!
          * Attribute counter.
          */
         u2 attributes_count;

         /*!
          * Class attributes.
          * Size attributes_cout. Ignore all urecognized attributes.
          */
         attribute_info *attributes;
 } field_info;

/*!
 * Print all fields of the .class;
 * @param constant_pool The constant_pool pointer
 * @param size          The size of the constant pool
 */
void printAllFields(field_info *all_fields, u2 size);

/*!
 * Print the entry in the index passed. It needs the whole field info
 * because it needs information in other entries.
 * @param field_info The field info array
 * @param index         index of the entry
 */
void printFieldInfo(field_info * all_field, u2 index);

/*!
 * Frees memory used by an entry. Sets the pointer to NULL
 * @param entry Pointer to a pointer so it can set it to NULL after freeing.
 */
void freeFieldEntry(field_info ** entry);
#endif // FIELDS_H
