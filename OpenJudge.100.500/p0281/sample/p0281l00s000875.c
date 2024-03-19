#include <stdio.h>
#define INFINITY 1000000
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n, M[MAX][MAX];

void abx()
{
  int i, u, v, minv;
  int d[MAX], color[MAX];

  for( i=0; i<n; i++ )
    {
      d[i] = INFINITY;
      color[i] = WHITE;
    }

  d[0] = 0;
  color[0] = GRAY;               
  while(1)
    {
      minv = INFINITY;          
      for( i=0; i<n; i++ )
	{
	  if( minv > d[i] && color[i] != BLACK )   
	    {
	      u = i;
	      minv = d[i];
	    }
	}
      if( minv == INFINITY ) break;
      color[u] = BLACK;
      for( v=0; v<n; v++ )
	{
	  if( color[v] != BLACK && M[u][v] != INFINITY )
	    {
	      if( d[v] > d[u] + M[u][v] )
		{
		  d[v] = d[u] + M[u][v];
		  color[v] = GRAY;
		}
	    }
	}
    }

  for( i=0; i<n; i++ )
    {
      printf("%d %d\n", i, d[i]);
    }
  
}


int main()
{
  int i, j,u, k, v, c;
  
  scanf("%d", &n);

  for( i=0; i<n; i++ )
    {
      for( j=0; j<n; j++ )
	{
	  M[i][j] = INFINITY;
	}
    }
  
  for( i=0; i<n; i++ )
    {
      scanf("%d%d", &u, &k);

      for( j=0; j<k; j++ )
	{
	  scanf("%d%d", &v, &c);
	  M[u][v] = c;
	}
    }

  abx();

  return 0;
}

