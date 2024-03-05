#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <string.h>


#include "stack.h"
#include "notation_logic.h"


char* parse_string(char * string){
    struct Stack stack = init_stack();
    char * buffer = (char*)malloc(sizeof(char)* 10);
    char * output = (char*)malloc(sizeof(char)* 100);
    int flag_num = 0;
    int len = strlen(string);
    for (int i = 0; i < len; i++){
        if (is_number(string[i])){
            int tmp_i = i;
            while(is_number(string[tmp_i])){
                buffer[flag_num] = string[tmp_i];
                flag_num++;
                tmp_i++;
               
            }
            buffer[flag_num++] = ' ';
            buffer[flag_num++] = '\0';
            i = tmp_i-1;
            flag_num = 0;
            printf("current i is %d\n", i);
            strcat(output, buffer);
            printf("%s.\n", buffer);
            printf("%s\n", output);

            /*buffer[0] = string[i];
            buffer[1] = ' ';
            buffer[2] = '\0';
            strcat(output, buffer);
            printf("%s\n", buffer);*/
            
        }
        else if (string[i]=='x')
            strcat(output, "x ");
        else if (is_operation(string[i])){
            char * buffer_2 = (char*)malloc(sizeof(char)* 6);
            if (string[i] == 's'|| string[i] == 'c'){
                int tmp_i = i;
                if ((string[tmp_i+1]== 'i'&& string[tmp_i+2]== 'n')|| (string[tmp_i+1]== 'o'&& string[tmp_i+2] == 's')){
                    buffer_2[0] = string[i];
                    buffer_2[1] = string[tmp_i+1];
                    buffer_2[2] = string[tmp_i+2]; 
                    buffer_2[3] = ' ';
                    buffer_2[4] = '\0';
                    i += 2;
                }
            }
            else{

            buffer_2[0]=string[i];
            buffer_2[1] = ' ';
            buffer_2[2] = '\0';
            printf("%s\n", buffer_2);}

            if (stack.top !=NULL){
                while(stack.top !=NULL && check_priority(stack.top->operand) >= check_priority(buffer_2)){
                    strcat(output,stack_pop(&stack));
                    //strcat(output, " ");
                }
                stack_push(&stack, buffer_2);
                printf("stack in %s\n", stack.top->operand);
                
            }
            else{
                stack_push(&stack, buffer_2);
                printf("stack in %s\n", stack.top->operand);
            }
        }

            

    
    }
    free(buffer);
    while((buffer = stack_pop(&stack))!= NULL){
        printf("stack out %s\n", buffer);
        strcat(output,buffer);
        //strcat(output, " ");
    }


    return output;
}

/*float calculate_string(float x, struct Stack * operands, char * polish_string){




    return value;
}*/

int check_priority(char * operation){
    int value = 0;
    if(strcmp(operation, "- ") == 0|| strcmp(operation, "+ ") == 0)
        value = 1;
    else if (strcmp(operation, "* ") == 0|| strcmp(operation, "/ ") == 0)
        value = 2;
    else if (strcmp(operation, "sin ") == 0|| strcmp(operation, "cos ") == 0)
        value = 3;
    else if (strcmp(operation, "^ ") == 0)
        value = 4;
    return value;
}

int is_number(char operand){
    int res = 0;
    if (operand >='0' && operand <= '9')
        res = 1;

    return res;
}
int is_operation(char operand){
    int res = 0;
    if (operand == '+' || operand == '-' || operand == '*'|| operand == '/'|| operand == '^'||operand == 's'||operand == 'c')
        res = 1;
    return res;
}
