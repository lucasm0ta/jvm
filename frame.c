#include "frame.h"

stackFrame * createStackFrame() {
    stackFrame* new = (stackFrame *) malloc(sizeof(stackFrame));
    if(new == NULL) {
        return NULL;
    }
    new->size_of_stack = 0;
    new->head_frame = NULL;
    return new;
}

OperandStack* createOpStack(int size_of_stack) {
    OperandStack* new_opStack = (OperandStack*) malloc(sizeof(OperandStack));
    if(new_opStack == NULL) {
        return NULL;
    }
    new_opStack->last = 0;
    LocalVar * operands = (LocalVar*) malloc(sizeof(LocalVar)*size_of_stack); 
    new_opStack->operands = operands;
    return new_opStack;
}

void pushFrame(stackFrame* stack, Frame * frame) {
    Node* new_node = (Node *) malloc(sizeof(Node));
    new_node->frame = frame;
    new_node->next = stack->head_frame;
    stack->head_frame = new_node;   
}


void popFrame(stackFrame* stack) {
    Node* old_node = stack->head_frame;
    stack->head_frame = old_node->next;
}

Frame * createFrame(u1** constant_pool, Class* class_file, u1* code) {
    Frame* new = (Frame*) malloc(sizeof(Frame));
    new->class_file = class_file;
    new->constant_pool = constant_pool;
    new->code = code;
    Code *code_structure = (Code*) code;

    new->local_var_size = code_structure->max_locals;
    new->operand_stack_size = code_structure->max_stack;
    new->code_length = code_structure->code_length;

    new->local_variables = (LocalVar*) malloc(sizeof(LocalVar) * new->local_var_size);
    new->operand_stack = createOpStack(new->operand_stack_size);

    return new;
}

void freeNode(Node* node) {
    freeFrame(node->frame);
    free(node);
}

void freeFrame(Frame* frame) {
    free(frame->local_variables);
    free(frame->operand_stack->operands);
    free(frame->operand_stack);
}

