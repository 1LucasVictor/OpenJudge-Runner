#include<stdio.h>
#define MAX 100 
#define WHITE 0
#define GRAY  1
#define BLACK 2
#define NIL -1
int n;
int M[MAX][MAX];


void dik()
{
  int i;
  int v;
  int min;
  int d[MAX];
  int color[MAX];
  int u;

  for( i = 0 ; i < n ; i ++ ){
    d[i] = 10000000;
    color[i] = WHITE;
  }

  d[0] = 0;
  color[0] = GRAY;

  while(1){
    min = 10000000;
    u = NIL;
    for( i = 0 ; i < n ; i++ ){
      if( min > d[i] && color[i] != BLACK ){
	u = i;
	min = d[i];
      }
    }
    if( u == NIL )break;
    color[u] = BLACK;
    for( v = 0 ; v < n ; v++ ){
      if( color[v] != BLACK && M[u][v] != 10000000){
	if( d[v] > d[u] + M[u][v] ){
	  d[v] = d[u] + M[u][v];
	  color[v] = GRAY;
	}
      }
    }
  }
  for( i = 0 ; i < n ; i++ ){
    printf("%d ",i);
    if( d[i] == 10000000 )printf("-1\n");
    else printf("%d\n",d[i]);
  }
}

int main()
{
  int i;
  int j;
  int m;
  int u,v;
  int c;
  
  
  scanf("%d",&n);
  for( i = 0 ; i < n ; i++ ){
    for( j = 0 ; j < n ; j++ ){
      M[i][j] = 1000000;
    }
  }

  for( i = 0 ; i < n ; i++ ){
    scanf("%d%d",&u,&m);
    for( j = 0 ; j < m ; j++ ){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }

  dik();

  return 0 ;
}
  

