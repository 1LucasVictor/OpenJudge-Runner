#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 110

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int s[MAX];
int top;

int main(){
  char c[100];
  int a,b;
  
  while(scanf("%s",c)!=EOF){
    
    if(c[0] == '+'||c[0] == '*'||c[0] == '-'){
      a = pop();
      b = pop();
      
      switch(c[0]){
      case '+':
	push(a+b);
	break;
      case '-':
	push(a-b);
	break;
      case '*':
	push(a*b);
	break;
      default :
	break;
      }
    }else{
      push(atoi(c));
    }
  }

  printf("%d\n",s[top]);
  return 0;
}

void initialize(){
  top = 0;
}
int isEmpty(){
  if(top == 0) return 1;
  return 0;
}
int isFull(){
  if(top >= MAX - 1) return 1;
  return 0;
}
void push(int x){
  if(isFull()){
    printf("stack overflow!");
    exit(1);
  }
  top++;
  s[top] = x;
}
int pop(){
  if(isEmpty()){
    printf("stack underflow!");
    exit(2);
  }
  top--;
  return s[top+1];
}