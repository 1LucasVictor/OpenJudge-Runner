#include<stdio.h>
#define MAX 10000
#define WHITE 0
#define GRAY  1
#define BLACK 2

int n,M[MAX][MAX];

int prim()
{
  int i;
  int u;
  int min;
  int d[MAX];
  int p[MAX];
  int color[MAX];
  int sum = 0;
  int v;

  for( i = 0 ; i < n ; i++ ){
    d[i] = 10000000;
    p[i] = -1;
    color[i] = WHITE;
  }
  d[0] = 0;

  while(1){
    min = 1000000;
    u = -1;
    for( i = 0 ; i < n ; i++ ){
      if( min > d[i] && color[i] != BLACK ){
	u = i;
	min = d[i];
      }
    }
    if( u == -1 )break;
    color[u] = BLACK;
    for( v = 0 ; v < n ; v++ ){
      if( color[v] != BLACK && M[u][v] != 100000 ){
	if( d[v] > M[u][v] ){
	  d[v] = M[u][v];
	  p[v] = u;
	  color[v] = GRAY;
	}
      }
    }
  }
  for( i = 0 ; i < n ; i++ ){
    if( p[i] != -1 ) sum += M[i][p[i]];
  }

  return sum;
}
  
int main()
{
  int i,j;
  int k;

  scanf("%d",&n);
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j++ ){
      scanf("%d",&k);
      M[i][j] = (k == -1) ? 1000000 : k;
    }
  }

  printf("%d\n",prim());
  for(i = 0 ; i < n ; i++ );
}
      
      
  

