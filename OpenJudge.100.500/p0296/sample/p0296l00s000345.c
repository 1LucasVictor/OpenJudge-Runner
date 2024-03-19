#include<stdio.h>
#include<string.h>

#define MAX 200

int isEmpty();
int isFull();
void Push(int);
int Pop();

int top = 0, s[MAX];

int main()
{
  int y;
  char a[16], b;

  while(scanf("%s", a)!=EOF)
    {
      if(a[0] == '+')
	{
	  y = Pop();
	  y += Pop();
	  Push(y);
	}
      else if(a[0] == '-')
	{
	  y = -1*Pop();
	  y += Pop();
	  Push(y);
	}
      else if(a[0] == '*')
	{
	  y = Pop();
	  y *= Pop();
	  Push(y);
	}
      else if(b=='\n')
	{
	  break;
	}
      else
	{
	  Push(atoi(a));
	}
      
    }

  printf("%d\n", Pop());
      
  return 0;
}

int isEmpty()
{
  return top == 0;
}
int isFull()
{
  return top >= MAX-1;
}
void Push(int x)
{
  if(isFull())
    {
      fprintf(stderr, "OVF\n");
    }
  top++;
  s[top] = x;
}
int Pop()
{
  if(isEmpty())
    {
      fprintf(stderr, "UNF");
    }
  top--;
  return s[top+1];
}