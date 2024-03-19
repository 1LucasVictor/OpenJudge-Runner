#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX 100

void initialize(void);
int isEmpty(void);
int isFull(void);
int push(int);
int pop(void);

int top;
int m[MAX];

int main(){
  int x, a, b;
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

  printf("%d\n",m[top]);

  return 0;
}

int isEmpty(void){
  if (top == 0) return 1;
  else return 0;
}

int isFull(void){
  if(top > MAX-1) return 1;
  else return 0;
}

int push(int x){
  if(isFull() == 0){
  top++;
  m[top] = x;
  }
}

int pop(void){
  if (isEmpty() == 0){
    top--;
  return m[top + 1];
  }
}