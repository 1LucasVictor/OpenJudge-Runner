#include<stdio.h>
#define MAX 100
int main(void)
{
  int n	,i,j,k,a,b,c;
  int A[MAX][MAX];
  scanf("%d",&n);
  
  for(i = 1; i < n + 1; i++)
  {
  	for(j = 1; j < n + 1; j++)
    {
	  A[i][j] = 0;
    }
  }
 for(i = 1;i < n+1; i++)
 {
 	scanf("%d",&a);
	scanf("%d",&b);
	 for(k = 1; k < b+1; k++)
      {
	   scanf("%d",&c);
	   A[i][c]=1;
	  
	  }
 }
 
 for(i = 1; i < n + 1; i++)
  {
  	printf("%d",A[i][1]);
	for(j = 2; j < n + 1; j++)
    {
	  printf(" %d",A[i][j]);
    }
	printf("\n");
}
return 0;
}