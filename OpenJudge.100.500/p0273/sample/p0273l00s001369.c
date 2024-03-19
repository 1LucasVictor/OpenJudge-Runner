#include <stdio.h>
#define NIL -1

int F[45];
int fibonacci(int n)
{
  int ans;
  if(F[n]!=NIL)
    {
      return F[n];
    }
  else
    {
     ans=fibonacci(n-1)+fibonacci(n-2);
     F[n]=ans;
     return ans;
    }
}

main()
{
  int n,i;
  for(i=2;i<45;i++)
    {
      F[i]=NIL;
    }
  F[0]=1;
  F[1]=1;
  scanf("%d",&n);
  printf("%d\n",fibonacci(n));
  return 0;
}