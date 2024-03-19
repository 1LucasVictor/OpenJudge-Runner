
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int top;
int S[100];

void push(int x){
    S[++top] = x;
}

int pop(){
    top--;
    return S[top + 1];
}


int main(int argc, char** argv) {
    
    int a,b;
    top = 0;
    char op[99];
    
    while(scanf("%s", op) !=EOF){
        if (op[0] == '+'){
            a = pop();
            b = pop();
            push(a+b);
        }
        else if(op[0] == '-'){
            b = pop();
            a = pop();
            push(a-b);
        }
        else if(op[0] == '*'){
            a = pop();
            b = pop();
            push(a*b);
        }
        else{
            push(atoi(op));
        } 
    }
    
    printf("%d\n", pop());
    
    return 0;
}


