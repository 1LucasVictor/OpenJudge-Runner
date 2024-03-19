#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int);
int pop();

int top,O[1000];

int main ()
{
  int x,y;
  top=0;
  char o[100];

  while(scanf("%s",o)!=EOF)
    {
      if(o[0]=='+')
	{
	  x=pop();
	  y=pop();
	  push(x+y);
	}
      else if(o[0]=='-')
	{
	  y=pop();
	  x=pop();
	  push(x-y);
	}
      else if(o[0]=='*')
	{
	  x=pop();
	  y=pop();
	  push(x*y);
	}
      else
	{
	  push(atoi(o));
	}
    }
  printf("%d\n",pop());

  return 0;
}

void push(int x)
{
  O[++top]=x;
}

int pop()
{
  top--;
  return O[top+1];
}


