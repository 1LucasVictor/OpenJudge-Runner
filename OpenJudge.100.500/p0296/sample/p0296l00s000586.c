#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int top, X[1000];

void push(int y)
{
  X[++top] = y;
}

int pop()
{
  top--;
  return X[top+1];
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


