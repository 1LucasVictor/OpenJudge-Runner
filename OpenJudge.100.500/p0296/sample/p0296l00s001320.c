#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pop(void);
void push(int);

int top=0, Arr[1000];

int main()
{
  int a, b;
  char c[100];

  while( scanf("%s", c) != EOF ){
    if( c[0] == '+' ){
      a = pop();
      b = pop();
      push(a + b);
    }
    else if( c[0] == '-' ){
      b = pop();
      a = pop();
      push(a - b);
    }
    else if( c[0] =='*' ){
      a = pop();
      b = pop();
      push(a * b);
    }
    else push(atoi(c));
  }

  printf("%d\n", pop());

  return 0;
}

int pop()
{
  top--;
  return Arr[top+1];
}

void push(int num)
{
  Arr[++top] = num;
}