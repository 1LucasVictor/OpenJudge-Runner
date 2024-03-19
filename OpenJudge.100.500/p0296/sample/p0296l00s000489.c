#include<stdio.h>
#define MAX 1000

int top;
int S[MAX];

int initialize(){
       return top=0;
       }

int isempty(){
       return top==0;
       }

int isfull(){
       return top>=MAX-1;
       }

void push(int n){
       if (isfull()){printf("overflow\n");}

       top++;
       S[top]=n;
       }

int pop(){
       if (isempty()){printf("overflow\n");}

       top--;
       return S[top+1];
       }

int main(){
       int i,j,x,y;
       char op[MAX];
       initialize();
       while(scanf("%s",&op) != EOF){
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


