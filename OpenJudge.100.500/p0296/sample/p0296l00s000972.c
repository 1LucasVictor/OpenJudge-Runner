#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 200
int S[N],n,top=0;
int main()
{
char x[100];
while(scanf("%s",x) != EOF)
  {
  if(x[0]=='+' && top != 1)
    {
    S[top-1] = S[top] + S[top-1];
    top--;
    }
  else if(x[0]=='*' && top != 1)
    {
    S[top-1] = S[top] * S[top-1];
    top--;
    }
  else if(x[0]=='-' && top != 1)
    {
    S[top-1] = S[top-1] - S[top];
    top--;
    }
  else
    {
    top++;
    S[top]=atoi(x);
    }
  }
printf("%d\n",S[top]);
return 0;
}

