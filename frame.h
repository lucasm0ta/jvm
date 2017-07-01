#include <stdlib.h>
#include "class.h"
#ifndef FRAME_H
#define FRAME_H

typedef union localVariable {
    int booleanv;
    u1 bytev;
    u1 charv;
    u2 shortv;
    u4 intv;
    u4 longv;
}LocalVar;

typedef struct _exception_table {
    u2 start_pc;
    u2 end_pc;
    u2 handler_pc;
    u2 catch_type;   
} Exception;

/**
 * Code structure
 */
typedef struct _Code {
    u2 attribute_name_index;
    u4 attribute_length;
    u2 max_stack;
    u2 max_locals;
    u4 code_length;
    u1 *code;
    u2 exception_table_length;
    Exception* exception_table;
    u2 attributes_count;
    attribute_info *attributes;
} Code;

/**
 * Stack of operands used inside a frame.
 * Uses an array with a pointer to its last element as a stack
 */
typedef struct _operandStack {
    // Last element of the array
    int last;
    // Stack represented by an array
    LocalVar* operands;
} OperandStack;

/**
 * Frame structure.
 */
typedef struct frame{
    Class* class_file; // Pointer to the class
	u1** constant_pool;
    u2 local_var_size; // Maximum size of the local_variable array
    LocalVar* local_variables; // Vetor de variaveis locais
    u2 operand_stack_size; // Maximum size of the operan_stack
    OperandStack* operand_stack;
    u4 pc;

    u4 code_length;
    u1* code;
} Frame;

typedef struct frame_node {
    Frame* frame;
    struct frame_node * next;
} Node;

/**
 * Stack frame will stack Frame pointers.
 */
typedef struct _stackFrame {
    int size_of_stack;
    Node* head_frame;
} stackFrame;

Frame * currentFrame;

/**
 * \brief Creates a Stack of Operand
 * @param  size_of_stack Maximum size of the stack
 * @return               Returns a pointer to a operandStack
 */
OperandStack* createOpStack(int size_of_stack);

/**
 * \brief Creates an empty stack for frames
 * \return Returns a pointer to an empty stack frame
 */
stackFrame * createStackFrame();

/**
 * Creates a new frame
 * 
 * @param  constant_pool Pointer to the constant_pool
 * @param  class_file    Pointer to the class structure
 * @param  code          Pointer to the code structure
 * @return               Returns a pointer to the new Frame
 */
Frame * createFrame(u1** constant_pool, Class* class_file, u1* code);

/**
 * \brief Pushes a new frame to the top of the stack
 * @param stack The stack which will be pushed to
 * @param frame The frame which will be pushed into the stack
 */
void pushFrame(stackFrame* stack, Frame * frame);

/**
 * \brief Pops a new frame to the top of the stack frame
 * @param stack The stack which will be popped
 */
void popFrame(stackFrame* stack);

/**
 * \brief Frees the memory of a node and the frame inside it
 * @param node Node that will be destroyed
 */
void freeNode(Node* node);

/**
 * \brief Fres the memory used by a frame
 * @param frame Frame that will be destroyed 
 */
void freeFrame(Frame* frame);

#endif // FRAME_H