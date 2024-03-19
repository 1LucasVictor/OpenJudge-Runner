#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define STACK_SIZE 100

char *pop(char **stack, int *tail) 
{
    if(*tail < 0)  {
        return NULL;
    }
    return stack[(*tail)--]; 
}

void push(char *push_operand, char **stack, int *tail)
{
    stack[++(*tail)] = push_operand; 
}

int digitsNum(int num)
{
    int digit = 0, tmp = num;

    while(tmp != 0) {
        tmp = tmp / 10;
        ++digit;
    }

    return digit;
}

void calc(char *operand, char **stack, int *tail) 
{
    int left_operand, right_operand, result;
    char *result_str;

    if(!isdigit(operand[0])) {    
        right_operand = atoi(pop(stack, tail));
        left_operand = atoi(pop(stack, tail));
        if(strcmp(operand, "+") == 0) {
            result = left_operand + right_operand; 
        } else if(strcmp(operand, "-") == 0) {
            result = left_operand - right_operand;
        } else if(strcmp(operand, "*") == 0) {
            result = left_operand * right_operand;
        } 
        result_str = malloc(sizeof(char) * digitsNum(result));
        sprintf(result_str, "%d", result);
        push(result_str, stack, tail);
    }else {
        push(operand, stack, tail); 
    }
}

int main(void)
{
    int tail = -1;
    char *operand, **stack = NULL;
    char str[200];

    stack = malloc(sizeof(char*) * STACK_SIZE);
    fgets(str, sizeof(str), stdin);
    strtok(str, "\n\0");
    operand = strtok(str, " ");
    calc(operand, stack, &tail);
    while((operand = strtok(NULL, " ")) != NULL) {
        calc(operand, stack, &tail);
    }
    printf("%s\n", pop(stack, &tail));

    return 0;
}