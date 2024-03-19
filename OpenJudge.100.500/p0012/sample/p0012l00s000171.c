#include <stdio.h>
#include <stdlib.h>

#define MAX 101

static int top = 0;
static int stack[MAX];

void push(int x);
int pop(void);
int isEmpty(void);
int isFull(void);


int main(void){
  int n;

  while(scanf("%d", &n) != EOF){
    if(n != 0){
      push(n);
    }else{
      printf("%d\n", pop());
    }
  }
  return 0;
}


void push(int x){
  if(isFull()){
    printf("?????????????????????\n");
    exit(1);
  }
  stack[++top] = x;
}


int pop(void){
  if(isEmpty()){
    printf("??¢??????????????????\n");
    exit(1);
  }
  return stack[top--];
}


int isEmpty(void){
  return top == 0;
}


int isFull(void){
  return top >= MAX-1;
}