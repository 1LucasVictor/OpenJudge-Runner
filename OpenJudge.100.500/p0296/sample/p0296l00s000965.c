#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int top, S[1000];

void push(int x){
    S[++top]=x;
}

int pop(){
    top--;
    return S[top+1];
}

int main(){
    char input[100];
    top=0;
    int a,b;

    while(scanf("%s", input) != EOF){
        
        if(input[0]=='+'){
            a=pop();
            b=pop();
            push(a+b);
            
        }else if(input[0]=='-'){
            b=pop();
            a=pop();
            push(a-b);
            
        }else if(input[0]=='*'){
            a=pop();
            b=pop();
            push(a*b);

        }else{
            push(atoi(input));
        }
    }
    printf("%d\n",pop());
    return 0;
}
