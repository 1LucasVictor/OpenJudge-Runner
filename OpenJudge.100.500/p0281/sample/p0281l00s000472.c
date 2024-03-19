#include <stdio.h>

#define INF 10000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define N 101

int n;
int a[N][N];
int d[N];

void dijkstra(int key);
int min(int a, int b);

int main()
{
  int i, j;
  int num, k;
  int v /* 頂点numに隣接する頂点の番号　*/, c /* 辺の重み　*/;
  
  scanf("%d", &n);
  
  for(i = 0; i < n; i++)
    {
      for(j = 0; j < n; j++)
      {
	a[i][j] = INF;
      }
    }
  
  for(i = 0; i < n; i++)
    {     
      scanf("%d %d", &num, &k);
      
      for(j = 0; j < k; j++)
	{	  
	  scanf("%d %d", &v, &c);
	  a[num][v] = c;
	}
    }
  
  dijkstra(0);
  
  for(i = 0; i < n; i++)
    {
      printf("%d %d\n", i, d[i]);
    }
  
  return 0;  
}

void dijkstra(int key)
{
  int i, j;
  int color[N];
  int mincost, ver = -1;
  
  for(i = 0; i < n; i++)
    {
      d[i] = INF;
      color[i] = WHITE;
    }
  
  color[key] = GRAY;
  d[key] = 0;
  
  while(1)
    {
      mincost = INF;
      ver = -1;
      
      for(i = 0; i < n; i++)
	{
	  if(color[i] == GRAY && d[i] < mincost)
	    {
	      ver = i;
	      mincost = d[i];	      
	    }
	}
      
      if(ver == -1) break;
      
      color[ver] = BLACK;
      
      for(i = 0; i < n; i++)
	{
	  if(color[i] != BLACK && a[ver][i] != INF)
	    {	     
	      d[i] = min(d[i], d[ver] + a[ver][i]);
	      color[i] = GRAY;
	    }	
	}    
      
    }  
}

int min(int x, int y)
{
  if(x < y)return x;
  return y;
}

