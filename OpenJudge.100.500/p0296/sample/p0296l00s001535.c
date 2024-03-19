#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 1000
void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int top;
int S[MAX];
int main(){
  int x,i,j;
  char s[100];
  initialize();
  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      i = pop();
      j = pop();
      push(i+j);
    } else if ( s[0] == '-' ){
      i = pop();
      j = pop();
      push(j-i);
    } else if ( s[0] == '*' ){
      i = pop();
      j = pop();
      push(i*j);
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
  if(top==0)
  return 1;

  return 0;
}
int isFull(void){
  if(top >= MAX - 1)
    return 1;

  return 0;
}
void push(int x){
  if (isFull()==1){
    printf("error(overflow)");
  }else{
  top++;
  S[top] = x;
  }
}
int pop(void){
  if(isEmpty()==1){
    printf("error(underflow)");
  }else{
    top--;
    return S[top+1];
  }
}