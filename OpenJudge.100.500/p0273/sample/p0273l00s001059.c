#include<stdio.h>
#define MAX 1000

int main()
{
  int i, j, k, N, v;
  int F[MAX];

  scanf("%d",&N);
 
  F[0] = 1;
  F[1] = 1;

  if(N==0||N==1)
    {
      printf("%d\n",1);
    }
  else
    {
      for(i=2;i<=N;i++)
	{
	  F[i] = F[i-1] + F[i-2];
	}
      printf("%d\n",F[N]);
    }
  return(0);
}