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
  char c;
  int flag=1;

  while(scanf("%c", &c)){

    if(c == '\n') break;

    if(c == ' '){
      flag = 0;
      continue;
    }

    if(c>='0' && c<='9'){
      x = atoi(&c);
      if(flag > 1){
	x = pop();
	x = flag*pop()+x;
      }
      push(x);
      flag *= 10;
      continue;
    }
    
    else if ( c == '+' ){
      x = pop();
      x += pop();
      push(x);
    } else if ( c == '-' ){
      x = pop();
      x -= pop();
      push(x);
    } else if ( c == '*' ){
      x = pop();
      x *= pop();
      push(x);
    } else {
      x = atoi(&c);
      push(x);
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