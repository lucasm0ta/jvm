/*!
 * Contains structs used as entries in the constant pool
 *
 *  Tag defines what type of info the struct is holding. The table bellow
 *  shows what each tag corresponds to
 *
 * Constant Type	Value
 * CONSTANT_Class	7
 * CONSTANT_Fieldref	9
 * CONSTANT_Methodref	10
 * CONSTANT_InterfaceMethodref	11
 * CONSTANT_String	8
 * CONSTANT_Integer	3
 * CONSTANT_Float	4
 * CONSTANT_Long	5
 * CONSTANT_Double	6
 * CONSTANT_NameAndType	12
 * CONSTANT_Utf8	1
 * CONSTANT_MethodHandle	15
 * CONSTANT_MethodType	16
 * CONSTANT_InvokeDynamic	18
 *
 * The full documentation can be found at
 * https://docs.oracle.com/javase/specs/jvms/se7/html/jvms-4.html#jvms-4.4.6
 */

#include <stdio.h>
#include <stdlib.h>
#include "util.h"

#ifndef CONSTANT_POOL_H
#define CONSTANT_POOL_H

/*!
 * Represent Class or Interface
 *
 * @tag:        Tag should be 7
 *
 * @name_index: Valid index into the constant_pool
 */
typedef struct CONSTANT_Class_info {
    u1 tag; // 7
    u2 name_index;
} class_info;

/*!
 * Represents Fields
 *
 * @tag:                    Tag should be 9
 *
 * @class_index:            Points to a class or interface type
 *
 * @name_and_type_index:    Valid index into the constant pool
 */
typedef struct CONSTANT_Fieldref_info {
    u1 tag; // 9
    u2 class_index;
    u2 name_and_type_index;
} fieldref_info;

/*!
 * Represents Methods
 *
 * @tag:                    Tag should be 10
 *
 * @class_index:            Points to a class or interface type
 *
 * @name_and_type_index:    Valid index into the constant pool
 */
typedef struct CONSTANT_Methodref_info {
    u1 tag; // 10
    u2 class_index;
    u2 name_and_type_index;
} methodref_info;

/*!
 * Represents a method in an interface
 *
 * @tag:                    Tag should be 10
 *
 * @class_index:            Points to a class or interface type
 *
 * @name_and_type_index:    Valid index into the constant pool
 */
typedef struct CONSTANT_InterfaceMethodref_info {
    u1 tag;
    u2 class_index;
    u2 name_and_type_index;
} interfacemethodref_info;

/*!
 * Represent contant objects of type string
 *
 * @tag:            Tag should be 8
 *
 * @string_index:   Valid index into the constant_pool (points to utf8)
 */
typedef struct CONSTANT_String_info {
    u1 tag; // 8
    u2 string_index;
} string_info;

/*!
 * Represents a 4 byte integer value
 *
 *
 * @tag:    Tag should be 3
 *
 * @bytes:  Integer value
 */
 typedef struct CONSTANT_Integer_info {
     u1 tag; // 3
     u4 bytes;
 } integer_info;

/*!
 * Represents a 4 byte float value
 *
 * @tag:    Tag should be 4
 *
 * @bytes:  Float value
 */
 typedef struct CONSTANT_Float_info {
     u1 tag; // 4
     u4 bytes;
 } float_info;

 /*!
  * Represents a 8 byte long value
  *
  * @tag:        Tag should be 5
  *
  * @high_bytes: The higher bytes of the double value
  *
  * @low_bytes:  Lower bytes of double value
  */
typedef struct CONSTANT_Long_info {
    u1 tag; // 5
    u4 high_bytes;
    u4 low_bytes;
} long_info;

/*!
 * Represents a 8 byte double value
 *
 * @tag:        Tag should be 6
 *
 * @high_bytes: The higher bytes of the double value
 *
 * @low_bytes:  Lower bytes of double value
 */
typedef struct CONSTANT_Double_info {
    u1 tag; // 6
    u4 high_bytes;
    u4 low_bytes;
} double_info;

/*!
 * Represents field or method without indicating which class or interface type
 * it belongs to.
 *
 * @tag:        Tag should be 12
 *
 * @name_index: valid index into the constant_pool
 *
 * @descriptor_index: valid index into the constant_pool
 */
typedef struct CONSTANT_NameAndType_info {
    u1 tag; // 12
    u2 name_index;
    u2 descriptor_index;
} name_and_type_info;

/*!
 * Represents constant string values
 *
 * @tag:        Tag should be 1
 *
 * @length:     String Length
 *
 * @bytes:      Bytes of the string
 */
typedef struct CONSTANT_Utf8_info {
    u1 tag; // 1
    u2 length;
    u1 bytes[];
} utf8_info;

/*!
 * Represents a method handle
 *
 * @tag:                Tag should be 15
 *
 * @reference_kind:     Value ranging form 1 to 9. Denotes kind of method handle
 *
 * @reference_index:    Valid index into the constant_pool. reference_kind defines
 *                      what it should point to
 */
typedef struct CONSTANT_MethodHandle_info {
     u1 tag; // 15
     u1 reference_kind;
     u2 reference_index;
 } method_handle_info;

/*!
 * Represents a method type
 *
 * @tag:                Tag should be 16
 *
 * @descriptor_index:   Valid index into the constant_pool pointing to a utf8_info
 */
 typedef struct CONSTANT_MethodType_info {
     u1 tag; // 16
     u2 descriptor_index;
 } method_type_info;

/*!
 * Used by an invokeDynamic thing (?)
 *
 * @tag:                Tag should be 18
 *
 * @bootstrap_method_attr_index: (?)
 *
 * @name_and_type_index: Points to an entry in the constant_pool
 */
typedef struct CONSTANT_InvokeDynamic_info {
    u1 tag; // 18
    u2 bootstrap_method_attr_index;
    u2 name_and_type_index;
} invoke_dynamic_info;

/*!
 * Print the entry in the index passed. It needs the whole constant pool
 * because it needs information in other entries.
 * @param constant_pool The whole constant pool
 * @param index         index of the entry
 */
void printEntryInfo(u1 **constant_pool, int index);

/*!
 * Print the entire constant poo;
 * @param constant_pool The constant_pool pointer
 * @param size          The size of the constant pool
 */
void printConstantPool(u1** constant_pool, int size);

/*!
 * Prints the information contained in a utf8, class_info or name_index
 * entry. This way instead of printing only the entry number we can print
 * what it Contains
 *
 * @param constant_pool pointer to constant_pool
 * @param index         the index we want the info from
 */
void printUtf8String(u1** constant_pool, int index);

/*!
 * Frees memory used by an entry. Sets the pointer to NULL
 * @param entry Pointer to a pointer so it can set it to NULL after freeing.
 */
void freeEntry(u1** entry);

#endif // CONSTANT_POOL_H
