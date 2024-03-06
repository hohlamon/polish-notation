#ifndef UTILS_H
#define UTILS_H
#define WIDTH 80
#define HIGHT 25


void print_graph(char ** matrix);


void build_graph(char ** matrix, char * string);


char ** init_matrix();

void free_matrix(char** matrix);

#endif