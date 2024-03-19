#include <stdio.h>
#define N 44
int main()
{
  int count,answer,F[N],i;
  while(1)
    {
      scanf("%d",&count);
      if(count>=0 && count<=N)
	break;
    }
  F[0]=1;
  F[1]=1;
  for(i=2;i<=count;i++)
    F[i]=F[i-2]+F[i-1];
  printf("%d\n",F[count]);
  return 0;
}

