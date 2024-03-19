#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void push(int);
int pop(void);

int top,S[1000];

int main()
{
  int a=0,b=0,i,j;
  top = 0;
  char s[100];

while(1)
  {

    if((scanf("%s",s))==EOF)break;

    if(s[0]=='+')
    {
      a = pop();
      b = pop();
      push(a + b);
    }

    else if(s[0]=='-')
    {
      a = pop();
      b = pop();
      push(b - a);
    }

    else if(s[0]=='*')
    {
      a = pop();
      b = pop();
      push(a * b);
    }

    else push(atoi(s));

  }
  printf("%d\n",pop());
  return 0;
}

void push(int x)
{
 top=top+1;
 S[top] = x;
}

int pop()
{
  top=top-1;
  return S[top+1];
}

