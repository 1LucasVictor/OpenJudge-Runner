#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1024

int st[MAX], top;

int isFull();
int isEmpty();
void push(int);
int pop();

int main(){
  char symbol[MAX];
  int i, num1, num2;
  top = 1;

  while(scanf("%s", symbol) != EOF){
    if(symbol[0] == '+'){
      num1 = pop();
      num2 = pop();
      push(num1 + num2);
    }else if(symbol[0] == '-'){
      num2 = pop();
      num1 = pop();
      push(num1 - num2);
    }else if(symbol[0] == '*'){
      num1 = pop();
      num2 = pop();
      push(num1 * num2);
    }else{
      push(atoi(symbol));
    }

  }
    printf("%d\n", pop());

  return 0;
}

int isFull(){
  if(top == MAX - 1)return 1;
  else return 0;
}

int isEmpty(){
  if(top == 0)return 1;
  else return 0;
}

void push(int num){
  if(isFull() == 1)exit(1);
  else{
    ++top;
    st[top] = num;
  }
}

int pop(){
  if(isEmpty() == 1)exit(2);
  else{
    --top;
    return st[top + 1];
  }
}

