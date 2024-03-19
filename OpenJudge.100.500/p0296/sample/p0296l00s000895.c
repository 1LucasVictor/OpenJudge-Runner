#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int pop(void);
void push(int);
int top=0,A[100];

int main()
{
  int x,y,z;
  char In[100];

  
  while(scanf("%s",In)!=EOF)
    {
      if(In[0]=='+')
	{
	  x=pop();
	  y=pop();
	  push(x+y);
	}

      else if(In[0]=='-')
	{
	  x=pop();
	  y=pop();
	  push(y-x);
	}

      else if(In[0]=='*')
	{
	  x=pop();
	  y=pop();
	  push(x*y);
	}
      else push(atoi(In));
    }
  
  printf("%d\n",A[1]);

  return 0;
}

int pop(void)
{
  top--;
  return A[top+1];
}

void push(int a)
{
  top++;
  A[top]=a;
}
 