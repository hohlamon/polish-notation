#ifndef STACK_H
#define STACK_H

struct Node {
  char *operand;
  struct Node *next;
};

struct Stack {
  int amount;
  struct Node *top;
};

struct Node_int {
  float operand;
  struct Node_int *next;
};

struct Stack_int {
  int amount;
  struct Node_int *top;
};

struct Stack init_stack();

void stack_push(struct Stack *stack, char *new_operand);

char *stack_pop(struct Stack *stack);

struct Stack_int init_stack_int();

void stack_push_int(struct Stack_int *stack, float new_operand);

float stack_pop_int(struct Stack_int *stack);

#endif