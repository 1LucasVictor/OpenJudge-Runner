#include <stdio.h>
#include <stdlib.h>
#define N 100

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);
int top, S[N];

int main(){
  int a, b, x;
  char s[N];
  initialize();
  while((scanf("%s",s)) != EOF){
    if(s[0] == '+'){
      a = pop();
      b = pop();
      push(a+b);
    }
    else if(s[0] == '='){
      a = pop();
      b = pop();
      push(a-b);
    }
    else if(s[0] == '*'){
      a = pop();
      b = pop();
      push(a*b);
    }
    else{
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  
  return 0;
}

void initialize(void){
    top = 0;
}

int isEmpty(void){
  if(top == 0) return 1;
  return 0;
}

int isFull(void){
  if(top > N-1) return 1;
  else return 0;
}

void push(int x){
  if(top > N){
    printf("error\n");
    exit(1);
  }
  top++;
  S[top] = x;
}

int pop(void){
  if(isEmpty()){
    printf("error\n");
    exit(2);
  }
  top--;
  return S[top+1];
}