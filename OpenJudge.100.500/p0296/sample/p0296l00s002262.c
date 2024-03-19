#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 1000

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int top = 0;
int S[MAX];

int main(){
  int x,a,b;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      a = pop();
      b = pop();
      push(a+b);
    } else if ( s[0] == '-' ){
      a = pop();
      b = pop();
      push(b-a);
    } else if ( s[0] == '*' ){
      a = pop();
      b = pop();
      push(a*b);
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",S[top]);
  return 0;
}

void initialize(void){
  top = 0;
}

int isEmpty(void){
  if(top == 0) return 1;
  else return 0;
}

int isFull(void){
  if(top >= MAX - 1) return 1;
  else return 0;
}

void push(int x){
  if(isFull() == 1) fprintf(stderr,"Error(overflow)\n");
  else{
    top++;
    S[top] = x;
  }
}

int pop(void){
  if(isEmpty() == 1) fprintf(stderr,"Error(underflow)\n");
  else{
    top--;
  return S[top+1];
  }
}