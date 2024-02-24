#include <stdlib.h>
#include <stdio.h>
#include <math.h>

#include "utils.h"


void print_graph(char ** matrix){
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            printf("%c",matrix[i][j]);
            if (j == WIDTH - 1)
                printf("\n");

        }

    }
}

float func(float x){
    return cos(x);
    

}

void build_graph(char ** matrix){
    float step_x = 13./ WIDTH;
    float step_y = 2./ HIGHT;
    for (int i = 0; i < HIGHT; i++){
        for (int j = 0; j < WIDTH; j++){
            if (round(func(j * step_x)*10) == round((-1 + i * step_y) * 10))
                matrix[i][j] = '*';
            else
                matrix[i][j] = ' ';

        }
    }
}

char ** init_matrix(){
    char ** matrix = (char **)malloc(sizeof(char * )* HIGHT);
    for (int i = 0; i < HIGHT; i++){
        matrix[i] = (char*)malloc(sizeof(char) * WIDTH);
    }
    return matrix;
}




