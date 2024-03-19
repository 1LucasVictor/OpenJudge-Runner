#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pop(void);
void push(int);
int isEmpty(void);
//int atoi( const char *str );

int top=0;
int S[100];

int main(){
  int x,y;
  char s[199];

  while(scanf("%s", s) != EOF){


    if ( s[0] == '+' ){
      x = pop();
      y = pop();
      push(x+y);
    } else if ( s[0] == '-' ){
      x = pop();
      y = pop();
      push(x-y);
    } else if ( s[0] == '*' ){
      x = pop();
      y = pop();
      push(x*y);
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
  return S[top+1];
}

void push(int x){
  top++;
  S[top] = x;
}