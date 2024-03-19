#include<stdio.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY 10000001
void dij(int n,int d[],int M[N][N])
{
  int i,vertex,min_d,color[N];

  for(i=0;i<n;i++)
    {
      d[i] = INFTY;
      color[i] = WHITE;

    }
  d[0] = 0;
  color[0] = GRAY;


  while(1)
    {

      vertex = -1;
      min_d = INFTY;

      for(i=0;i<n;i++)
	{
	  if(color[i] == GRAY && d[i] < min_d)
	    {
	      min_d = d[i];
	      vertex = i;
	    }
	}
      if(vertex == -1)break;
      color[vertex] = BLACK;
  

      for(i=0;i<n;i++)
	{
	  if(color[i] != BLACK && M[vertex][i]< INFTY)
	    {
	      color[i] = GRAY;
	      if(d[i] > d[vertex] + M[vertex][i])
		{
		  d[i] = d[vertex] + M[vertex][i];
		}
	    }
	}
    }
}
	       


int main()
{
  int n,i,j,v,u,k,c,d[N],M[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j] = INFTY;
    }
  }


  for(i=0;i<n;i++)
    {
      scanf("%d %d",&u,&k);
      for(j=0;j<k;j++)
	{
	  scanf("%d %d",&v,&c);
	  M[u][v] = c;
	}
    }
 
  dij(n,d,M);
  for(i=0;i<n;i++)
    {
      printf("%d %d\n",i,d[i]);
    }
  return 0;
}


/*void dij()
{
  int min,d[MAX],color[MAX],u,v,i;


  for(i=0;i<n;i++)
    {
      d[i] = 100000;
      color[i] = WHITE;
    }
  d[0] = 0;
  color[0] = GRAY;
   while(1)
    {
      min = 100000;
      u=-1;
      for(i=0;i<n;i++)
	{
	  if(color[i] != BLACK && d[i] < min)
	    {
	      min = d[i];
	      u=i;
	    }
	}
      if(u == -1) break;
      color[u] = BLACK;
      for(v=0;v<n;v++)
	{
	  if(color[v] != BLACK && M[u][v] != 100000)
	    {
	      if(d[v] > d[u] +M[u][v])
		{
		  d[v] = d[u] + M[u][v];
		  color[v] = GRAY;
		}
	    }
	}
    }
  

  for(i=0;i<n;i++)
    {
      printf("%d ",i);
      if(d[i] == 100000) printf("-1\n");
      else printf("%d\n",d[i]);
    }
    }*/

