#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
 
#define WHITE 0
#define BLACK 1
 
int **matrix;
int *d;
int *parent;
int *color;
 
void dijkstra(int);
 
int main()
{
  int n,i,j,k,u,v;
  scanf("%d",&n);
 
  color =  malloc(n * sizeof(int ));
  d =  malloc(n * sizeof(int ));
  parent = malloc(n * sizeof(int));
 
  matrix = malloc(n * sizeof(int *));
  for(i=0;i<n;i++)
    matrix[i] = malloc(n * sizeof(int));
  
  for(i=0;i<n;i++)
    for(j=0;j<n;j++)
      matrix[i][j] = -1;
  
  for(i=0;i<n;i++)
    {
      scanf("%d%d",&u,&k);
      for(j=0;j<k;j++)
	{
	  scanf("%d",&v);
	  scanf("%d",&matrix[u][v]);
	}
    }
  
  dijkstra(n);
  
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
  
  free(d);
  free(color);
  free(parent);
  for(i=0;i<n;i++) free(matrix[i]);
  free(matrix);
 
  return 0;
   
}
 
 
void dijkstra(int n)
{
  int mincost;
  int i,j,u;
  
  for(i=0;i<n;i++)
    {
      d[i] = INT_MAX;
      parent[i] = -1;
      color[i] = WHITE;
    }
  
  d[0] = 0;
  
  while(1)
    {
      mincost = INT_MAX;
      
      for(i=0;i<n;i++)
	{
	  if(color[i] != BLACK && d[i] < mincost)
	    {
	      mincost = d[i];
	      u = i;
	    }
	}
      
      if(mincost == INT_MAX) break;
      
      color[u] = BLACK;
      
      for(i=0;i<n;i++)
	{
	  if(color[i] != BLACK && matrix[u][i] != -1 && matrix[u][i] + d[u] < d[i])
	    {
	      d[i] = matrix[u][i] + d[u];
	      parent[i] = u;
	    }
	}
    }
}