#include "util.h"
#include "constant_pool.h"

#ifndef CLASS_H
#define CLASS_H

typedef struct attribute_info {
    /*!
     *
     */
    u2 attribute_name_index;

    /*!
     *
     */
    u4 attribute_length;

    /*!
     * Size attribute_length.
     */
    u1 info[];
} attribute_info;

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
        attribute_info attributes[];
} field_info;

/*!
 *
 */
typedef struct method_info{
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
    attribute_info attributes[];
} method_info;

/*!
 * Struct representing a class structure.
 */
typedef struct Class{
    /*!
     * The magic number that represents a .class file.
     */
    u4 magic_number;

    /*!
     * Minor version of the class.
     */
    u2 minor_version;

    /*!
     * Major version of the class.
     */
    u2 major_version;

    /*!
     * Counter of the constant poll.
     */
    u2 constant_pool_count;

    //TODO: Create with the respective size. malloc it
    /*!
     * Array of cp_info. Of size constant_pool_count - 1.
     */
    u1 **constant_pool;

    /*!
     * Access flag of the class. It's a bitmask.
     */
    u2 access_flags;

    /*!
     * Identify this class. Index into the constant pool to a "Class"-type entry.
     */
    u2 this_class;

    /*!
     * Identify super class. Index into the constant pool to a "Class"-type entry.
     */
    u2 super_class;

    /*!
     * Number of entries in the following interface table.
     */
    u2 interfaces_count;

    // TODO: malloc on create.
    /*!
     * An array of interfaces. Size of interfaces_count.
     */
    u2 *interfaces;

    /*!
     * Number of entries in the following field table.
     */
    u2 fields_count;

    // TODO: malloc on create.
    /*!
     * Table of fields. Of size fields_count.
     */
    field_info *fields;

    /*!
     * Counter of methods.
     */
    u2 methods_count;

    // TODO: malloc on create.
    /*!
     * Size of methods_count.
     */
    method_info *methods;

    /*!
     * Counter attribute.
     */
    u2 attributes_count;

    // TODO: malloc on create.
    /*!
     * Size of attributes_count.
     */
    attribute_info *attributes;
} Class;

#endif // CLASS_H
