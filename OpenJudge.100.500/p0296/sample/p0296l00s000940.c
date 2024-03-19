#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000

int top;
int S[MAX];

void push(int n){


       ++top;
       S[top]=n;
       }

int pop(){


       top--;
       return S[top+1];
       }

int main(){
       int x,y;
       char op[MAX];
       top=0;

       while(scanf("%s",op) != EOF){
                   if(op[0]=='+'){
                               x=pop();
                               y=pop();
                               push(x+y);
                               }
                   else if(op[0]=='-'){
                               x=pop();
                               y=pop();
                               push(x-y);
                               }
                   else if(op[0]=='*'){
                               x=pop();
                               y=pop();
                               push(x*y);
                               }
                   else {push(atoi(op));}
                   }
          printf("%d\n",pop());
          return 0;
          }


