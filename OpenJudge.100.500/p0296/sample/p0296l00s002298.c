#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000 

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int stack[MAX];
int top;

int main(){
  int a,b;
  char box[100];
  initialize();
  while(scanf("%s",box) != EOF){
    if(box[0] == '+'){
      a = pop();
      b = pop();
      push(a + b);
    }
    else if(box[0] == '-'){
      a = pop();
      b = pop();
      push(b - a);
    }
    else if(box[0] == '*'){
      a = pop();
      b = pop();
      push(a * b);
    }
    else if(box[0] >= '0' && box[0] <= '9'){
      push(atoi(box));
    }
    else continue;
  }

  printf("%d\n",pop());

  
  return 0;
}

void initialize(){
  top = 0;
}

int isEmpty(void){
  if(top == 0) return 0;
  else return 1;
}

int isFull(void){
  if(top >= MAX - 1) return 0;
  else return 1;
}

void push(int x){
  if(isFull() == 0){
    printf("エラー　(オーバーフロー)\n");
    exit(2);
  }
  top++;
  stack[top] = x;
}

int pop(void){
  if(isEmpty() == 0){
    printf("エラー　(アンダーフロー)\n");
    exit(1);
  }
  top--;
  return stack[top + 1];
}

