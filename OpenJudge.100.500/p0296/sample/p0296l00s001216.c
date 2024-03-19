#include<stdio.h>
#include<string.h>

void push(int);
int pop(void);

int S[100];
int top=0;

int main()
{
  int a,b,n;
  top=0;
  while(scanf("%s",S)!=EOF)
    {
      if(S[0]=='+')
	{
	  a=pop();
	  b=pop();
	  push(a+b);
	}
      else if(S[0] == '-')
	{
	  a=pop();
	  b=pop();
	  push(a-b);
	}
      else if(S[0] == '*')
	{
	  a=pop();
	  b=pop();
	  push(a*b);
	}
      else 
	{
	  n=atoi(S);
	  push(n);
	}
    }
  printf("%d\n",pop());
  return 0;
}

void push(int x)
{
  S[++top]=x;
  return ;

}

int pop(void )
{
  top--;
  return S[top+1];
}