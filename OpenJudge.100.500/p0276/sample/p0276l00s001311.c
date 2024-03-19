#include<stdio.h>

int main()
{
  int i,j,x;
  int n,u,k,v;
  int V[100][100]={0};

  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      for(j=0;j<k;j++){
	scanf("%d",&v);
	V[i][v-1]=1;
      }
    }

  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	  printf("%d",V[i][j]);
	  if(j!=n-1) printf(" ");
	}
      printf("\n");
    }
	         
  return 0;
}

