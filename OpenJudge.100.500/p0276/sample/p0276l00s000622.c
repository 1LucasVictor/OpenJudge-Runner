#include<stdio.h>

int main(){
  int M[100][100];
  int n, n1, n2, n3; 
  int i, j;

  scanf("%d",&n);

  for ( i = 1; i <=n; i++ )
    {
      for ( j = 1; j <=n; j++ ) 
	{
	  M[i][j] = 0;
	}
    }
  
  for ( i = 1; i <= n; i++ )
    {
      scanf("%d %d",&n1,&n2);
      

      for ( j = 1; j <= n2; j++ )
	{
	  scanf("%d",&n3);
	  
	  M[i][n3] = 1;
	}
    }
  
  for ( i = 1; i <= n; i++ )
    {
      for ( j = 1; j <= n; j++ )
	{
	  printf("%d",M[i][j]);
	}
      printf("\n");
    }

  return 0;
}