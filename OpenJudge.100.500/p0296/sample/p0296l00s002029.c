#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define max 100

int stack[max],top=0;

void push(int );
int pop(void);

int main(){
  char s[max];
  int a;
  while(scanf("%s",s)!=EOF){
    if(s[0]=='+'){
      push(pop()+pop());
    }
    else if(s[0]=='-'){
      a=pop();
      push(pop()-a);
    } 
    else if(s[0]=='*'){
      push(pop()*pop());
    }
    else {
      push(atoi(s));
    }   
  }
  printf("%d\n",pop());
  return 0;
}

void push(int x){
  if(top<max)
    stack[top++]=x;
}
int pop(void){
  if(top>0)
    return stack[--top];
}

