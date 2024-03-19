#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pop(void);
void push(int);
int isEmpty(void);
int atoi( const char *str );

int top=0;
int S[100];

int main(){
  int x;
  char s[100];

  while(scanf("%s", s) != EOF){

 
    if ( s[0] == '+' ){
      x = pop();
      x += pop();
      push(x);
    } else if ( s[0] == '-' ){
      x = pop();
      x -= pop();
      push(x);
    } else if ( s[0] == '*' ){
      x = pop();
      x *= pop();
      push(x);
    } else {atoi(s);
      push(atoi(s));
    }
  }
  printf("%d\n",pop());

  return 0;
}

int pop(){
  if(isEmpty() == 1) fprintf(stderr,"underflow\n");
  else top -= 1;
  return S[top+1];
}

void push(int x){
  top += 1;
  S[top] = x;
}

int isEmpty(){
  if(top == 0) return 1;
  else return 0;
}