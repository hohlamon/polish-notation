#ifndef STACK_H
#define STACK_H

struct Node{
    char * operand;
    struct Node * next;
};

struct Stack{
    int amount;
    struct Node * top;

};

struct Stack init_stack();

void stack_push(struct Stack * stack, char* new_operand);

char * stack_pop(struct Stack * stack);








#endif