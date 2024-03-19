#include <stdio.h>
#include <stdlib.h>
#define N 100
#define MAX 100
int top;
int S[MAX];
void initialize();
int isEmpty();
int isFull();
void push(int x);
int pop();

int main()
{
  int i,num,l,k;
  char n[N];
  
  initialize();
  while((scanf("%s",n)) != EOF){
    if(n[0] == '+'){
      push(pop()+pop());
    }
    else if(n[0] == '-'){
      l = pop();
      k = pop();
      push(k -l);
    }
    else if(n[0] == '*'){
      push(pop()*pop());
    }
    else{
      num = atoi(n);
      push(num);
    }
  }
  printf("%d\n",pop());
  return 0;
}

void initialize(){
  top = 0;
}
int isEmpty(){
  if(top == 0){
  return -1;
  }
  return 0;
}
int isFull(){
  if(top >= MAX -1){
  return -1;
  }
  return 0;
}
void push(int x){
  if(isFull() == -1){
    printf("Error\n");
  }
  top++;
  S[top] = x;
}
int pop(){
  if(isEmpty() == -1){
    printf("Error\n");
  }
  top--;
  return S[top+1];  
}

