#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int);
int pop(void);

int top,s[1000];

int main(){
  int x,a,b;
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

  printf("%d\n",pop());

  return 0;
}

int pop(){

  top--;
  return s[top+1];
}

void push(x){

  top++;
  s[top] = x;
}