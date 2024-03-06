#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "libs/stack.h"
#include "libs/notation_logic.h"
#include "libs/utils.h"

int main() {
  char buffer[30];
  char *result;
  scanf("%s", buffer);
  result = parse_string(buffer);

  printf("\n reverse notation = %s\n", result);

  char **matrix = init_matrix();

  build_graph(matrix, result);

  print_graph(matrix);

  free_matrix(matrix);
  free(result);

  return 0;
}