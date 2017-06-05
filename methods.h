#include "attribute.h"

#ifndef METHODS_H
#define METHODS_H
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
    attribute_info *attributes;
} method_info;

typedef struct exception_table{
    u2 start_pc;
    u2 end_pc;
    u2 handler_pc;
    u2 catch_type;
}exception_table;

typedef struct code_attribute {
    u2 attribute_name_index;
    u4 attribute_length;
    u2 max_stack;
    u2 max_locals;
    u4 code_length;

    /*!
     * Size of code_length
     */
    u1 *code;
    u2 exception_table_length;
    /*!
     * Size of exception_table_length
     */
    exception_table *exception;

    u2 attributes_count;

    /*!
     * Size of attributes_count
     */
    attribute_info *attributes;
}code_attribute;

void printAllMethods(method_info *methods, u2 size);
 #endif // METHODS_H
