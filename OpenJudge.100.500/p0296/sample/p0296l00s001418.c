#include <stdio.h>
#include<stdlib.h>
#include<string.h>
void push(int);
int pop(void);
void isEmpty();
void isFull();
int hantei(char *);
void mozi(char *);
int toridashi(char *);

int S[100];
int top=0;

int main(){
  int a,b,c,i=0,x;
  char stack[100];
  while(scanf("%s", stack) != EOF){
    if(stack[0]=='+'){
      a=pop();
      b=pop();
      push(a+b);
    }
    else if(stack[0]=='-'){
      a=pop();
      b=pop();
      push(a-b);
    }
    else if(stack[0]=='*'){
      a=pop();
      b=pop();
      push(a*b);
    }
    else{
      x=atoi(stack);
      push(x);
    }
  }

  printf("%d\n",pop());


  return 0;
}

void push(int c){

  S[++top]=c;
}

int pop(){
  top--;
  return S[top+1];
}
  