#include <stdio.h>

int main()
{
  int N,i,j,k,v;
  int A[100];

  scanf("%d",&N);
  for(i=0;i<N;i++)
    {
      scanf("%d",&A[i]);
      printf("%d",A[i]);
      if(i!=N-1) printf(" ");
    }
  printf("\n");
  for(i=1;i<N;i++)
    {
      v=A[i];
      j=i-1;
      while(j>=0&&A[j]>v)
	{
	  A[j+1]=A[j];
	  j--;
	  A[j+1]=v;
	}
      for(k=0;k<N;k++)
	{
	  printf("%d",A[k]);
	  if(k!=N-1) printf(" ");
	}
      printf("\n"); 
    }
  
  return 0;
}