#include<stdio.h>

int main(){

  int N = 0,A[100],i = 0,j = 0,k = 0,l = 0,m = 0,flag = 0;

  scanf("%d",&N);

  for(i = 0;i < N;i++)
    {
      scanf("%d",&A[i]);
    }
  while(j < N-1)
    {
    for(k = N-1;k >= j+1;--k)
      {
	if(A[k] < A[k-1])
	  {
	    l  = A[k-1];
	    A[k-1] = A[k];
	    A[k] = l;
	    flag += 1;
	  }
      }
    ++j;
    }
  for(m = 0;m < N;m++)
    {
      if(m == N-1)
	{
	  printf("%d\n",A[m]);
	}
      else if(m < N-1)
	{
      printf("%d ",A[m]);
	}
    }
  printf("%d\n",flag);
  return 0;
}

