#include "util.h"
#include "constant_pool.h"
#include "attribute.h"
#include "fields.h"
#include "methods.h"

#ifndef CLASS_H
#define CLASS_H

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
