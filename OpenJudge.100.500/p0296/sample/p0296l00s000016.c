// 1_3_A
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFSIZE 900
#define STACKSIZE 100

typedef long elemtype;

typedef struct{
    elemtype operands[STACKSIZE];
    int top;
} stack_t;

void InitStack(stack_t *stack){
    stack->top = -1;
    return;
}

void Push(stack_t *stack, long num){
    stack->top += 1;
    stack->operands[stack->top] = num;
    return;
}

long Pop(stack_t *stack){
    long num;
    num = stack->operands[stack->top];
    stack->top -= 1;
    return num;
}

int main(){
    char buf[BUFSIZE + 2], *p;
    stack_t stack;
    long x, y;

    InitStack(&stack);
    fgets(buf, BUFSIZE, stdin);

    if((p = strchr(buf, '\n')) != NULL) *p = '\0';

    p = strtok(buf, " ");
    while(p != NULL){
        if(*p == '+'){
            x = Pop(&stack); y = Pop(&stack);
            Push(&stack, y+x);
        } else if(*p == '-'){
            x = Pop(&stack); y = Pop(&stack);
            Push(&stack, y-x);
        } else if(*p == '*'){
            x = Pop(&stack); y = Pop(&stack);
            Push(&stack, y*x);
        } else{
            Push(&stack, (long)atoi(p));
        }

        p = strtok(NULL, " ");
    }
    printf("%ld\n", Pop(&stack));
    return 0;
}