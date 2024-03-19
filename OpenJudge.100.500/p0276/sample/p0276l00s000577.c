#include<stdio.h>
int main()
{
  int n,i,j,x,y,z;
  int matrix[101][101];
 
  scanf("%d",&n);

  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  matrix[i][j] = 0;
	}
    }

  for(i=1;i<=n;i++)
    {
      scanf("%d",&x);
      scanf("%d",&y);

      for(j=0;j<y;j++)
	{
	  scanf("%d",&z);
	  matrix[i][z]=1;
	}
    }
  for(i=1;i<=n;i++)
    {
      for(j=1;j<=n;j++)
	{
	  if(j>1) printf(" ");
	  printf("%d",matrix[i][j]);
	}
      printf("\n");
    }

  return 0;
}