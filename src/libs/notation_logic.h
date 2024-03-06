#ifndef NOTATION_LOGIC_H
#define NOTATION_LOGIC_H


int check_priority(char * operation);

int is_number(char operand);

int is_operation(char operand);

char* parse_string(char * string);

float char_2_float(char * operand);

float calc_string(float x, char * string);

void make_operation(struct Stack_int * stack, char * buffer);



#endif