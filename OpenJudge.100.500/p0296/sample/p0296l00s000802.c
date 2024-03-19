#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define max 1000000

void initialize();
int isEmpty();
int isFull();
void push(int);
int pop();

int top;
int S[max];

int main(){
    char c[max];
    int sum = 0;

    initialize();

    while(scanf("%s",c) != EOF){
        if(c[0] == '-'){
            push(- pop() + pop());
        }
        else if(c[0] == '+'){
            push(pop() + pop());
        }
        else if(c[0] == '*'){
            push(pop() * pop());
        }
        else{
            push(atoi(c));
        }   
    }
    
    printf("%d\n",S[1]);

    return 0;
}


void initialize(){
    top = 0;
}

int isEmpty(){
    if(top == 0)return 1; 
    return 0;
}

int isFull(){
    if(top >= MAX - 1)return 1;
    return 0;
}

void push(int x){
    if(isFull())fprintf(stderr,"Overflow");
    top++;
    S[top] = x;
}

int pop(){
    if(isEmpty())fprintf(stderr,"Anderflow");
    top--;
    return S[top+1];
}
