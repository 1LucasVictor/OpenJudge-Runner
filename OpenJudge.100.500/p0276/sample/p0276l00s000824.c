#include <stdio.h>
#define N 100
int main()
{
  int m[N][N];
  int n,k,u,v,i,j;    /*uは頂点、kはuの接点、vはuに隣接する頂点*/
  scanf("%d",&n);
  for(i=0;i<n;i++)
    {
      for(j=0;j<n;j++)
	{
	
	m[i][j]=0;
	}
    }
  
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      u--;
      for(j=0;j<k;j++)
	{
	  scanf("%d",&v);
	  v--;
	  m[u][v]= 1;
	}
    }
  for(i=0; i<n;i++)
    {
      for(j=0;j<n; j++)
	{
	  printf("%d",m[i][j]);
	  if(j!=n-1)printf(" ");
	}
      printf("\n");
    }
  return 0;

}

