#include<stdlib.h>
#include<stdio.h>


#define DPTH 1000
int stack[DPTH];
int top=0;

int pop(void){
    int ans = stack[top];
    top--;
    return ans;
}

void push(int num){
    top++;
    stack[top] = num;
}

int main(void){
    
    char op[10];
    while(scanf("%s", op) != EOF){
        if(op[0] == '+')
        {
            push(pop() + pop());
        }
        else if(op[0] == '-')
        {
            push(-pop() + pop());
        }
        else if(op[0] == '*'){
            push(pop()*pop());
        }
        else
        {
            push(atoi(op));
        }
    }
    
    printf("%d\n", pop());
    
    return 0;
}