#include<stdio.h>
#include<stdlib.h>
int main()
{
  int H,N,A[100000],i,k,wa;
  scanf("%d%d",&H,&N);
  for(i=0;i<N;i++)
  {
    scanf("%d",&A[i]);
  }
  wa=0;
  for(k=0;k<N;k++)
  {
    wa=wa+A[k];
    if(H<=wa)
    {
      printf("Yes");
      exit(0);
    }
  }
  printf("No");
}
     