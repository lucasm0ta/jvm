#include <stdint.h>
#include <stdlib.h>

#define INSTRUCTION_H
#ifndef INSTRUCTION_H

/*!
 * \brief The array of instructions.
 *
 * Each instruction os a fuction pointer.
 */
void (*instruction[256]) ();

/*!
 * \brief Creates array of inctructions to access
 */
void createInstructionsArray();

/*!
 * Calculate rest of division of double
 */
void _drem();

/**
 * Remove index a and an array from oprend stack and puts it in the same
 * position of of arrayRef[index]
 */
void aaload();

/**
 * Gets an object, an idex and an array from stack e puts the value in the
 * position defined by the index.
 */
void aastore();

/*!
 * \brief Put null in the operand stack.
 */
void aconst_null();

/*!
 * On index 0, finds local variables in the fields area, puts value in
 * the operand stack.
 */
void aload_0();

/*!
 * On index 1, finds local variables in the fields area, puts value in
 * the operand stack.
 */
void aload_1();

/*!
 * On index 2, finds local variables in the fields area, puts value in
 * the operand stack.
 */
void aload_2();

/*!
 * On index 3, finds local variables in the fields area, puts value in
 * the operand stack.
 */
void aload_3();

 /**
  * Remove index from code area of the frame, find local variable in the
  * fields area and puts it in the operand stack.
  */
void aload();

/*!
 * \breif Create a new array Object
 */
void anewarray();

/**
 * Return object of a method
 */
void areturn();

/**
 * Returns the size of the given array
 */
void arraylength();

/**
 * Store a value in a local variable indice 0
 */
void astore_0();

/**
 * Store a value in a local variable indice 1
 */
void astore_1();

/**
 * Store a value in a local variable indice 2
 */
void astore_2();

/**
 * Store a value in a local variable indice 3
 */
void astore_3();

/**
 * Get value from stack em uma posicao do array
 * de fields definida pelo operando tirado da area de codigo
 */
void astore();

/*!
 * Remove index and an array from operand's stack and puts from operand and puts
 * in position arrayRef[indice]
 */
void baload();

/**
 * Gets a byte, an index and an array from stack and puts the value in the
 * position defined by the index.
 */
void bastore();

/*!
 * \brief Puts byte in the stack from code area.
 */
void bipush();

/**
 * Remove index and an array from operand's stack and puts from operand and puts
 * in position arrayRef[indice]
 */
void caload();

/**
 * Gets a char, an index and an array from stack and puts the value in the
 * position defined by the index.
 */
void castore();
/*!
 * \brief With operand CP is type safe iff CP refers to a constant pool entry denoting either a class or an array, and one can validly replace the type Object on top of the incoming operand stack with the type denoted by CP yielding the outgoing type state.
 */
void checkcast();

/*!
 * \brief Type safe if one can validly pop double off the incoming operand stack and replace it with float, yielding the outgoing type state.
 */
void d2f();

/*!
 * \brief Type safe if one can validly pop double off the incoming operand stack and replace it with int, yielding the outgoing type state.
 */
void d2i();

/*!
 * \brief Type safe if one can validly pop double off the incoming operand stack and replace it with long, yielding the outgoing type state.
 */
void d2l();

/**
 * Sum two double from stack ad puts in the stack
 */
void dadd();

/**
 * Load double from array e coloca na pilha
 */
void daload();

/**
 * Gets double from an idex and an array from stack e puts and the value in the
 * position defined by the index.
 */
void dastore();

/**
 * Compare two doubles(greater)
 */
void dcmpg();

/**
 * Compare two doubles(less)
 */
void dcmpl();

/**
 * \brief Puts constant 0 double in stack
 */
void dconst_0();

/**
 * \brief Puts constant 1 double in stack
 */
void dconst_1();

/**
 * Divide two floats values from top of the stack and put result on stack.
 */
void ddiv();

 /**
  * On index 0, finds double local variables in the fields area, puts value in
  * the operand stack.
  */
void dload_0();

/**
 * On index 1, finds double local variables in the fields area, puts value in
 * the operand stack.
 */
void dload_1();

/**
 * On index 2, finds double local variables in the fields area, puts value in
 * the operand stack.
 */
void dload_2();

/**
 * On index 3, finds double local variables in the fields area, puts value in
 * the operand stack.
 */
void dload_3();

/**
 * Load a double value from a local variable #index.
 */
void dload();

/**
 * Multiply two double values from top of the stack and put result on stack.
 */
void dmul();

/**
 * Negative value of double
 */
void dneg();

/**
 * Return double of a method
 */
void dreturn();

/**
 * Store a double value in a local variable indice 0
 */
void dstore_0();

/**
 * Store a double value in a local variable indice 1
 */
void dstore_1();

/**
 * Store a double value in a local variable indice 2
 */
void dstore_2();

/**
 * Store a double value in a local variable indice 3
 */
void dstore_3();

/**
 * store a double value into a local variable #index
 */
void dstore();

/**
 * Subtract two double values from top of the stack and put result on stack.
 */
void dsub();

/**
 * Duplicate value on top of operand stack and insert two values
 */
void dup_x1();

/**
 * Duplicate value on top of operand stack and insert two or three values
 */
void dup_x2();

/**
 * pop and pushses this value twice.
 */
void dup();
/**
 * Dupplicates the top of one or two values from stack of operands and insert
 * one or two or three more elements.
 */
void dup2_x1();

/**
 * Dupplicates the top of one or two values from stack of operands and insert
 * one or two more elements.
 */
void dup2_x2();

/**
 * Duplica o topo de um ou dois elementos da pilha de operandos
 * Duplicate value on top of operand stack from one or two two elements
 */
void dup2();

/*!
 * Convert float to double
 */
void f2d();

/*!
 * Convert float to int
 */
void f2i();

/*!
 * Convert float to long
 */
void f2l();

/*!
 * Sum two floats from the stack(remove them) and puts result on stack.
 */
void fadd();

/**
 * Load float from array and puts
 */
void faload();

/**
 * Remove a float from index and an array from stack and puts the value in the
 * position defined by the index.
 */
void fastore();

/**
 * Compare two longs(grater)
 */
void fcmpg();

/**
 * Compare two longs(less)
 */
void fcmpl();

/**
 * \brief Puts constant 0 float in stack
 */
void fconst_0();

/**
 * \brief Puts constant 1 float in stack
 */
void fconst_1();

/**
 * \brief Puts constant 2 float in stack
 */
void fconst_2();

/**
 * Divide two floats values from top of the stack and put result on stack.
 */
void fdiv();

 /**
  * On index 0, finds float local variables in the fields area, puts value in
  * the operand stack.
  */
void fload_0();

 /**
  * On index 1, finds float local variables in the fields area, puts value in
  * the operand stack.
  */
void fload_1();

 /**
  * On index 2, finds float local variables in the fields area, puts value in
  * the operand stack.
  */
void fload_2();

 /**
  * On index 3, finds float local variables in the fields area, puts value in
  * the operand stack.
  */
void fload_3();

/**
 * Load a float value from a local variable #index.
 */
void fload();

/**
 * Multiply two float values from top of the stack and put result on stack.
 */
void fmul();

/**
 * Negative value of float
 */
void fneg();

/*!
 * Calculate rest of division of float
 */
void frem();

/**
 * Return float of a method
 */
void freturn();

/**
 * Store a long value in a local variable indice 0
 */
void fstore_0();

/**
 * Store a long value in a local variable indice 1
 */
void fstore_1();

/**
 * Store a long value in a local variable indice 2
 */
void fstore_2();

/**
 * Store a long value in a local variable indice 3
 */
void fstore_3();

/**
 * store a float value into a local variable #index
 */
void fstore();

/**
 * Subtract two float values from top of the stack and put result on stack.
 */
void fsub();

/**
 * Get field from object.
 */
void getfield();

/**
 * Get static field from a class.
 */
void getstatic();
void goto_w();

/*!
 * Convert int to byte
 */
void i2b();

/*!
 * Convert int to char
 */
void i2c();

/*!
 * Convert int to double
 */
void i2d();

/*!
 * Convert int to float
 */
void i2f();

/*!
 * Convert int to long
 */
void i2l();

/*!
 * Convert int to short
 */
void i2s();

/*!
 * Sum two integers from the stack(remove them) and puts result on stack.
 */
void iadd();

/**
 * Load int from array and puts on the stack
 */
void iaload();

/**
 * Calculate and of int
 */
void iand();

/**
 * Gets an integers, an index and an array from stack and puts on position defined by the index.
 */
void iastore();

/*!
 * \brief Puts 0 in the operand stack.
 */
void iconst_0();

/*!
 * \brief Puts 1 in the operand stack.
 */
void iconst_1();

/*!
 * \brief Puts 2 in the operand stack.
 */
void iconst_2();

/*!
 * \brief Puts 3 in the operand stack.
 */
void iconst_3();

/*!
 * \brief Puts 4 in the operand stack.
 */
void iconst_4();

/*!
 * \brief Puts 5 in the operand stack.
 */
void iconst_5();

/*!
 * \brief Puts -1 in the operand stack.
 */
void iconst_m1();

/**
 * Divide two int values from top of the stack and put result on stack.
 */
void idiv();

void if_acmpeq();

void if_acmpne();

/**
 * Makes jump if value1 = value2
 */
void if_icmpeq();

/**
 * Makes jump if value1 >= value2
 */
void if_icmpge();

/**
 * Makes jump if value1 > value2
 */
void if_icmpgt();

/**
 * Makes jump if value1 <= value2
 */
void if_icmple();

/**
 * Makes jump if value1 < value2
 */
void if_icmplt();

/**
 * Makes jump if value1 != value2
 */
void if_icmpne();

/**
 * If value is 0 goes to instruction at branchoffset
 */
void ifeq();

/**
 * If value is greater than 0 goes to instruction at branchoffset
 */
void ifge();

/**
 * If value is greater or equal than 0 goes to instruction at branchoffset
 */
void ifgt();

/**
 * If value is less than 0 goes to instruction at branchoffset
 */
void ifle();

/**
 * If value is less than 0 goes to instruction at branchoffset
 */
void iflt();

/**
 * If value different from 0 goes to instruction at branchoffset
 */
void ifne();

/**
 * Makes jump if the value in the stack of operands if not null
 */
void ifnonnull();

/**
 * Makes jump if value in the stack of operands if null
 */
void ifnull();

/**
 * Increment local variable in a constant
 */
void iinc();

/**
 * On index 0, finds int local variables in the fields area, puts value in
 * the operand stack.
 */
void iload_0();

/**
 * On index 1, finds int local variables in the fields area, puts value in
 * the operand stack.
 */
void iload_1();

/**
 * On index 2, finds int local variables in the fields area, puts value in
 * the operand stack.
 */
void iload_2();

/**
 * On index 3, finds int local variables in the fields area, puts value in
 * the operand stack.
 */
void iload_3();

/**
 * Load int in the stack from index to local variables.
 */
void iload();

/**
 * Multiply two int values from top of the stack and put result on stack.
 */
void imul();

/**
 * Negative value of integer
 */
void ineg();

/*!
 * Jump to given offset
 */
void ins_goto();

/**
 * Divide two long values from top of the stack and put result on stack.
 */
void ins_ldiv();

/**
 * Carregar objeto na pilha utilizando de um indice para o constant pool como operando
 * Load object in stack using from an index of the constant pool as operand.
 */
void ins_new();

void instanceof();
/**
 * Invoke interface method
 */
void invokeinterface();

/**
 * Invoke method with special treatment to private superclass e initialization
 * instance of methods.
 */
void invokespecial();

 /**
  * Invoke static method from a class
  */
void invokestatic();

/**
 * Call invoke method based on class
 */
void invokevirtual();

/**
 * Calculate 'or' of int
 */
void ior();

/*!
 * Calculate rest of division of ints
 */
void irem();

/**
 * Return int of a method
 */
void ireturn();

/**
 * Calculate value of shift left of int
 */
void ishl();

/**
 * Calculate value of shift right of int
 */
void ishr();

/**
 * Store int value into variable index 0
 */
void istore_0();

/**
 * Store int value into variable index 1
 */
void istore_1();

/**
 * Store int value into variable index 2
 */
void istore_2();

/**
 * Store int value into variable index 3
 */
void istore_3();

/**
 * Store int value into variable #index
 */
void istore();

/**
 * Subtract two int values from top of the stack and put result on stack.
 */
void isub();

/**
 * Calculate value of logic shift right of int
 */
void iushr();

/**
 * Calculate 'xor' of int
 */
void ixor();
void jsr_w();

/**
 * Jumps to given offset and puts return address in the stack
 */
void jsr();

/*!
 * Convert long to double
 */
void l2d();

/*!
 * Convert long to float
 */
void l2f();

/*!
 * Convert long to int
 */
void l2i();

/*!
 * Sum two long from the stack(remove them) and puts result on stack.
 */
void ladd();

/**
 * Load long from array and puts on stack.
 */
void laload();

/**
 * Calculate 'and' of long
 */
void land();

/**
 * ira um long um index e um array da pilha e coloca o valor na posicao definida pelo index
 * Gets a long, an index, and an array
 */
void lastore();

/**
 * Comparelongs
 */
void lcmp();

/**
 * Puts constant 0 long in operand stack
 */
void lconst_0();

/**
 * Puts constant 1 long in operand stack
 */
void lconst_1();

/**
 * Puts item in the stack from constant pool at index 16  bits
 */
void ldc_w();

/**
 * \brief Puts an item in the stack from constant pool.
 */
void ldc();

 /**
  * Puts long or double in stack from constant pool at index 16 bits
  */
void ldc2_w();


/*!
 * On index 0, finds long local variables in the fields area, puts value in
 * the operand stack.
 */
void lload_0();

/*!
 * On index 1, finds long local variables in the fields area, puts value in
 * the operand stack.
 */
void lload_1();

/*!
 * On index 2, finds long local variables in the fields area, puts value in
 * the operand stack.
 */
void lload_2();

/*!
 * On index 3, finds long local variables in the fields area, puts value in
 * the operand stack.
 */
void lload_3();

/**
 * Load a long value from a local variable #index.
 */
void lload();

/**
 * Multiply two long values from top of the stack and put result on stack.
 */
void lmul();

/**
 * Negative value of long
 */
void lneg();

/**
 * Access jump table by key and makes jump
 */
void lookupswitch();

/**
 * Calculate 'or' of long
 */
void lor();

/*!
 * Calculate rest of division of long
 */
void lrem();

/**
 * Return long of a method
 */
void lreturn();

/**
 * Calculate value of shift left of long
 */
void lshl();

/**
 * Calculate value of shift right of long
 */
void lshr();

/**
 * Store a long value in a local variable indice 0
 */
void lstore_0();

/**
 * Store a long value in a local variable indice 1
 */
void lstore_1();

/**
 * Store a long value in a local variable indice 2
 */
void lstore_2();

/**
 * Store a long value in a local variable indice 3
 */
void lstore_3();

/**
 * store a long value in a local variable #index
 */
void lstore();

/**
 * Subtract two long values from top of the stack and put result on stack.
 */
void lsub();

/**
 * Calculate value of logical shift left of long
 */
void lushr();

/**
 * Calculate 'xor' of long
 */
void lxor();

/**
 * Create multidimentional array of all types
 */
void multianewarray();

/**
 * Creates new array of any type
 */
void newarray();

/*!
 * Do nothing.
 */
void nop();

/**
 * pop operand from stack
 */
void pop();

/**
 * pop 2 operands from stack
 */
void pop2();

/**
 * Set field of object
 */
void putfield();

/**
 * Put static field from a class
 */
void putstatic();

/**
 * Continues execution froma found address in a local variable.
 */
void ret();

/**
 * Remove index and an array from operand's stack and puts from operand and puts
 * in position arrayRef[indice]
 */
void saload();

/**
 * Gets a short, an index and an array from stack and puts the value in the
 * position defined by the index.
 */
void sastore();

/*!
 * \brief Puts short in stack from code area.
 */
void sipush();

/*!
 * Swap the two values from the top of the stack.
 */
void swap();

/**
 * Access jump table by index and does jump
 */
void tableswitch();

/**
 * Retornar void de um metodo
 */
void void_return();

void wide();

/**
 * \brief Calcula um offset a partir de dois 8bits retirados da area de codigo
 */
int32_t calculateOffset();

#endif //INSTRUCTION_H
