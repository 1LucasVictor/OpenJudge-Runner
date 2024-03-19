#include<stdio.h>
#define Maxn 10000
#define Maxq 500

int main()
{
  int n=0,q=0,i=0,j=0,k=0,flag=0;
  int A[Maxn],B[Maxq];
  
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d",&A[i]);
    }
  
  scanf("%d",&q);
  for(i=0;i<q;i++)
    {
      scanf("%d",&B[i]);
    }

  for(i=0;i<q;i++)
    {
      flag==0;
      for(j=0;j<n;j++)
	{
	  if(A[j]==B[i]) flag=1;
	}
      if(flag==1) k++;
    }

  printf("%d\n",k);

  return 0;
}
	  