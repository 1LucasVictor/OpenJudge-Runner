#include<stdio.h>
#include <stdlib.h>
#include <string.h>

#define INF 100000
#define MAX 101
#define NIL -6
#define WHITE 0
#define GRAY 1
#define BLACK 2

void Prim(void);

int n, G[MAX][MAX];

/*ここからがmain関数*/
int main()
{
  int i, j, e;

  scanf("%d",&n);

  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      scanf("%d", &e);
      if(e == -1)
	G[i][j] = INF;
      else
	G[i][j] = e;   
    }
  }
  
  Prim();
  
  return 0;
}

/*ここからがPrim関数*/
void Prim()
{
  int i, j, min, u, v, sum = 0;
  int d[MAX], pi[MAX], color[MAX];

  for(i = 0; i < n; i++){
    color[i] = WHITE;
    pi[i] = NIL;
    d[i] = INF;
  }
  
  d[0] = WHITE;

  while(1){
    u = NIL;
    min = INF;
    
    for(i = 0; i < n; i++){
      if(color[i] != BLACK && d[i] < min){      
	u = i;
	min = d[i];
      }
    }
    if(u == NIL)
      break;
    
    color[u] = BLACK;
    
    for(v = 0; v < n; v++){
      if(color[v] != BLACK && G[u][v] != INF){
	if(G[u][v] < d[v]){
	  color[v] = GRAY;
	  pi[v] = u;
	  d[v] = G[u][v];
	}
      }
    }
  }
  for(i = 0; i < n; i++)
    if(pi[i] != NIL)
      sum += G[i][pi[i]];
  
  printf("%d\n",sum);
}

