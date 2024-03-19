#include<stdio.h>
int main(void)
{
  int A[100][100],b[100],c[100],n,m,i,j,sum;
  scanf("%d%d",&n,&m);
  for(i=0;i<n;i++)
    {
      for(j=0;j<m;j++)
	{scanf("%d",&A[i][j]);}
    }
  for(j=0;j<m;j++)
    {scanf("%d",&b[j]);}
  for(i=0;i<n;i++)
    {
      sum=0;
      for(j=0;j<m;j++)
	{sum+=A[i][j]*b[j];}
      c[i]=sum;
    }
  for(i=0;i<n;i++)
    {
      printf("%d\n",c[i]);
    }
  return 0;
}