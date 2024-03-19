#include<stdio.h>
#include<stdlib.h>
#include<string.h>

#define MAX_N 1000

int sp = 0;
int value[MAX_N];

void push(int x)
{
  if(sp < MAX_N) value[sp++] = x;
  else printf("error: stuck full, can't push%d\n",x);      
}

int pop()
{
  if(sp > 0) return value[--sp];
  else
    {
      return 0;
    }
}

int main(){
  int x, tmp;
  char s[100];

  while(scanf("%s", s) != EOF ){
    if ( s[0] == '+' ){
      push(pop() + pop());
    } else if ( s[0] == '-' ){
      tmp = pop();
      push(pop() - tmp);
    } else if ( s[0] == '*' ){
      push(pop()*pop());
    } else {
      x = atoi(s);
      push(x);
    }
  }
  printf("%d\n",pop());
  return 0;
}