#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void push(int );
int pop(void);
int S[100];
int top = 0;

int main(){
  int x;
  char s[100];

  while( scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      x = pop() + pop();
      push(x);
      
    }
    else if ( s[0] == '-' ){
      x = pop() - pop();
      push(x);

    }
    else if ( s[0] == '*' ){
      x = pop() * pop();
      push(x);
      
    }

    else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",S[1]);
  return 0;
}

void push(int x)
{
  if(top >= 100-1) printf("??¨??????(?????????????????????)\n");
  top++;
  S[top] = x;
}

int pop()
{
  if(S[top] == 0) printf("??¨??????(??¢??????????????????)\n");
  top--;
  return S[top+1];
}