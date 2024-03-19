#include"stdio.h"

int main()
{
  int num;
  int A[1000];
  int i,j,k;
  int v;
  scanf("%d",&num);
  for(k=0;k<num;k++)
    {
      scanf("%d",&A[k]);
    }
  for(k=0;k<num;k++)
    {
      printf("%d ",A[k]);
    }
  printf("\n");
  for(i=1;i<num;i++)
    {
      if(A[i-1]>A[i])
	{
	  v=A[i];
	  j=i-1;
	  while(j>=0&&A[j]>v)
	    {
	      A[j+1]=A[j];
	      j--;
	    }
	  A[j+1]=v;
	}
      for(k=0;k<num;k++)
	{
	  printf("%d ",A[k]);
	}
      printf("\n");
    }
  return 0;
}

