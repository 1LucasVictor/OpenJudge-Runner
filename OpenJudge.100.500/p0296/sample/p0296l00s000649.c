#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int isEmpty();
int isFull();
void push(int);
int pop();

int NUM[1000];
int top;

int main(){
  int x1,x2;
  int top = 0;
  char A[100];
  while(scanf("%s",A) != EOF){
    
    if(A[0] != '-' && A[0] != '+' && A[0] != '*'){
      push(atoi(A));
    }
    else{
     x1 = pop();
     x2 = pop();
     if(A[0] == '-') push(x2-x1);
     else if(A[0] == '+') push(x2+x1);
     else if(A[0] == '*') push(x2*x1);
    }
  }
  printf("%d\n",pop());
  return 0;
}

int isEmpty(){
  if(top ==0) return 1;
  else return 0;
}

int isFull(){
  if(top >= MAX - 1) return 1;
  else return 0;
}

void push(int n){
  if(isFull()){
    fprintf(stderr,"エラー （オーバーフロー）\n");
    exit(1);
  }
  top++;
  NUM[top] = n;
}

int pop(){
  if(isEmpty()){
    fprintf(stderr,"エラー （オーバーフロー）\n");
    exit(2);
  }
  top--;
  return NUM[top+1];
}