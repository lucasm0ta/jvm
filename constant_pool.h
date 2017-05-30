/*!
 * Contains structs used in the constant pool
 *
 * Each entry in the constant_pool array is of type cp_info defined by
 *
 *      cp_info {
            u1 tag;
            u1 info[];
        }
 *
 *  Where tag defines what type of info the struct is holding. The table bellow
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

#include "util.h"

#ifndef CONSTANT_POOL_H
#define CONSTANT_POOL_H

/*!
 * Represent Class or Interface
 */
typedef struct CONSTANT_Class_info {
    /*!
     * Value 7
     */
    u1 tag;

    /*!
     * Valid index into the constant_pool table
     */
    u2 name_index;
} class_info;

/*!
 *
 */
typedef struct CONSTANT_Fieldref_info {
    /*!
     * Value 9
     */
    u1 tag;

    /*!
     * Index must point to a class type or interface type
     */
    u2 class_index;

    /*!
     * Valid index into the constant pool table. Must point to a name_and_type.
     */
    u2 name_and_type_index;
} fieldref_info;

/*!
 *
 */
typedef struct CONSTANT_Methodref_info {
    /*!
     * Value 10
     */
    u1 tag;

    /*!
     * Index must point to a class type or interface type
     */
    u2 class_index;

    /*!
     * Valid index into the constant pool table. Must point to a name_and_type.
     */
    u2 name_and_type_index;
} methodref_info;

/*!
 *
 */
typedef struct CONSTANT_InterfaceMethodref_info {
    /*!
     * Value 11
     */
    u1 tag;

    /*!
     * Index must point to a class type or interface type
     */
    u2 class_index;

    /*!
     * Valid index into the constant pool table. Must point to a name_and_type.
     */
    u2 name_and_type_index;
} interfacemethodref;

/*!
 * Represent contant objects of type string
 */
typedef struct CONSTANT_String_info {
    /*!
     * Value 8
     */
    u1 tag;

    /*!
     * Valid index into the constant pool table that points to a utf8_info.
     */
    u2 string_index;
} string_info;

/*!
 * Represents a 4 byte integer value
 */
 typedef struct CONSTANT_Integer_info {
     /*!
      * Value 3
      */
     u1 tag;

     /*!
      * bytes representing value (big-endian)
      */
     u4 bytes;
 } integer_info;

/*!
 * Represents a 4 byte float value
 */
 typedef struct CONSTANT_Float_info {
     /*!
      * Value 4
      */
     u1 tag;

     /*!
      * bytes representing value (big-endian)
      */
     u4 bytes;
 } float_info;

 /*!
  * Represents a 8 byte long value
  */
typedef struct CONSTANT_Long_info {
    /*!
     * Value 5
     */
    u1 tag;

    /*!
     * The high_bytes and low_bytes items together represents the value
     */
    u4 high_bytes;
    u4 low_bytes;
} long_info;

/*!
 * Represents a 8 byte double value
 */
typedef struct CONSTANT_Double_info {
    /*!
     * Value 6
     */
    u1 tag;

    /*!
     * The high_bytes and low_bytes items together represents the value
     */
    u4 high_bytes;
    u4 low_bytes;
} double_info;

/*!
 * Represents field or method without indicating which class or interface type
 * it belongs to.
 */
typedef struct CONSTANT_NameAndType_info {
    /*!
     * Value 12
     */
    u1 tag;

    /*!
     * name_index and descriptor_index must be a
     * valid index into the consntant_pool that points to a utf8_info
     */
    u2 name_index;
    u2 descriptor_index;
} name_and_type_info;

/*!
 * Represents constant string values
 */
typedef struct CONSTANT_Utf8_info {
    /*!
     * Value 1
     */
    u1 tag;

    /*!
     * String length
     */
    u2 length;

    /*!
     * Bytes of the string
     */
    u1 bytes[length];
} utf8_info;

/*!
 * Represents a method handle
 */
typedef struct CONSTANT_MethodHandle_info {
    /*!
     * Value 15
     */
     u1 tag;

     /*!
      * Value ranigng from 1 to 9 that denotes the kind of this
      * method handle.
      */
     u1 reference_kind;

     /*!
      * Valid index into the constant_pool the reference_kind defines what type
      * of entry it should point to
      */
     u2 reference_index;
 } method_handle_info;

/*!
 * Represents a method type
 */
 typedef struct CONSTANT_MethodType_info {
     /*!
      * Value 16
      */
     u1 tag;

     /*!
      * Valid index into the constant_pool pointing to a utf8_info
      */
     u2 descriptor_index;
 } method_type_info;

/*!
 *
 */
typedef struct CONSTANT_InvokeDynamic_info {
    /*!
     * Value 18
     */
    u1 tag;

    /*!
     *
     */
    u2 bootstrap_method_attr_index;

    /*!
     *
     */
    u2 name_and_type_index;
} invoke_dynamic_info;

#endif // CONSTANT_POOL_H
