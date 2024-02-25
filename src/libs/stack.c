#include <stdio.h>
#include <stdlib.h>

#include "stack.h"


struct Stack init_stack(){
    struct Stack stack = {0, NULL};
    return stack;
}

void stack_push(struct Stack * stack, char* new_operand){
    struct Node* new = (struct Node *)malloc(sizeof(struct Node));
    //new->operand = (char *)malloc(sizeof(char) * 6);
    new->operand = new_operand;
    new->next = stack->top;
    stack->top = new;
    stack->amount++;

}

char * stack_pop(struct Stack * stack){
    char * value = NULL;
    //struct Node * temp;
    if (stack->amount > 0){
        value = stack->top ->operand;
        stack->amount--;
       // temp = stack.top;
        stack->top = stack->top->next;
        //free(temp);


    }
    return value;
}


