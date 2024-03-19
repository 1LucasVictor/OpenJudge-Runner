#include<stdio.h>

#define N 100

typedef struct{
  int k,u;
  int c[N];
}Node;

Node a[N];

int main()
{
  int n,i,j,b[N][N] = {{0},{0}};

  scanf("%d",&n);

  for(i=0;i<n;i++)
    {
      scanf("%d %d",&a[i].u,&a[i].k);
      for(j = 0;j < a[i].k;j++)
	scanf("%d",&a[i].c[j]);
    }

  for(i = 0;i < n;i++)
    {
      for(j = 0;j < a[i].k;j++)
	  b[i][a[i].c[j]-1] = 1;
    }

  for(i = 0;i < n;i++)
    {
      for(j = 0;j < n;j++)
	printf("%d ",b[i][j]);
      printf("\n");
    }
  
  return 0;
}

