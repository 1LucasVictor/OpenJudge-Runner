#include<stdio.h>
#include<stdlib.h>

void initialize(void);
int isEmpty(void);
int isFull(void);
void push(int);
int pop(void);

int MAX = 100;
int operand[100];
int top;

int main(){
  char x2;
  char *x1;
  int p1,p2;
  int s;
  initialize();
  x1 = &x2;
  while(1){
    if(scanf(" %s",x1)==EOF)break;

    if(x2 == '*'){
      p1 = pop();
      p2 = pop();
      push(p1*p2);
    }
    else if(x2 == '+'){
      p1 = pop();
      p2 = pop();
      push(p1+p2);
    }
    else if(x2 == '-'){
      p1 = pop();
      p2 = pop();
      push(p2-p1);
      }    
    else{
      push(atoi(x1));
    }
  }
  printf("%d\n",operand[top]);
  return 0;
}

void initialize(void){
  top = 0;
}

int isEmpty(void){
  return top == 0;
}

int isFull(void){
  return top >= MAX - 1;
}

void push(int kazu){
  if(isFull()){
    printf("Error1\n");
    exit(0);
  }
  top++;
  operand[top] = kazu;
}

int pop(void){
  if(isEmpty()){
    printf("Error2\n");
    exit(1);
  }
  top--;
  return operand[top+1];
}