#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define MAX 100

int top, s[MAX];

void initialize();
int isEmpty();
int isFull();
void push(int);
char pop();

int main(){
  int x, y;
  char s[MAX];

  initialize();

  while(scanf("%s", s) != EOF ){
    
    if (s[0] == '+' ){
      x = pop();
      y = pop();
      push(x + y);
    }
    else if (s[0] == '-' ){
      y = pop();
      x = pop();
      push(x - y);
    }
    else if (s[0] == '*' ){
      x = pop();
      y = pop();
      push(x * y);
    }
    else {
      push(atoi(s));
    }
  }

  printf("%d\n", pop());

  return 0;
}

void initialize(){
  top = 0;
}

int isEmpty(int top){
  if(top == 0)  return 0;
  else return 1;
}

int isFull(int top){
  if(top >= MAX -1)  return 0;
  else return 1;
}

void push(int x){
  if(isFull(top) == 0)   printf("??¨?????????????????????????????????\n");
  else{
    top++;
    s[top] = x;
  }
}
  
char pop(){
  if(isEmpty(top) == 0) printf("??¨???????????¢?????????????????????\n");
  else top--; 
  return s[top+1];
}