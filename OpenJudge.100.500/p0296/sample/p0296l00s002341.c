#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
enum{MaxStack = 300};//#define MaxStack = 300;

typedef struct{
    int top;
    int st[MaxStack];
}stack;

stack* init_stack(){
    stack* sp = (stack*) malloc(sizeof(stack));
    sp -> top = -1;
    return sp;
}

int empty(stack *s){
    return (s -> top == -1);
}

void push(stack *s, int n){
    if(s->top == MaxStack - 1){
        printf("Stack Overflow\n");
        exit(1);
    }
    (s->top)++;
    s -> st[s->top] = n;
}

int pop(stack* s){
    if(empty(s)) return -9999;
    int hold = s -> st[s->top];
    (s->top) --;
    return hold;
}

int main(){
    
    /*do{
        scanf("%d", &n);
        push(S, n);
    }while(n != 0);*/
    char formula[1200];
    fgets(formula, sizeof(formula), stdin);
    formula[strlen(formula)-1] = '\0';
   
    stack* S = init_stack();
    int n;
    for(int i=0; i<strlen(formula); i++){
        if(formula[i]>='0' && formula[i]<='9'){
            int op_rand = formula[i] - '0';
            push(S, op_rand);
        }
        else if(isspace(formula[i]));
        else{
            if(formula[i] == '+'){
                int b = pop(S);
                int a = pop(S);
                push(S, a+b);
            }
            else if(formula[i] == '-'){
                int b = pop(S);
                int a = pop(S);
                push(S, a-b);
            }
            else if(formula[i] == '*'){
                int b = pop(S);
                int a = pop(S);
                push(S, a*b);
            }
            else if(formula[i] == '/'){
                int b = pop(S);
                int a = pop(S);
                push(S, a/b);
            }
        }
    }
    printf("%d\n", pop(S));
}

