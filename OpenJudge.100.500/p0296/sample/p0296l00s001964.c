#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top, x[1000];

int pop()
{
  top--;
  return x[top+1];
}

void push(int y)
{
  x[++top] = y;
}

int main()
{
  int a, b;
  char c[100];
  top = 0;

  while(scanf("%s", c) != EOF)
    {
      if(c[0] == '+')
	{
	  a = pop();
	  b = pop();
	  push(a + b);
	}
      else if(c[0] == '-')
	{
	  a = pop();
	  b = pop();
	  push(a - b);
	}
      else if(c[0] == '*')
	{
	  a = pop();
	  b = pop();
	  push(a * b);
	}
      else
	{
	  push(atoi(c));
	}
    }
  printf("%d\n", pop());
  return 0;
}


