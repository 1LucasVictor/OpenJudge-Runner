#include <stdio.h>
#define INF 222200
#define MAXN 100
#define NIL -1
#define WHITE 0
#define BLACK 1
#define GRAY 2

int MST(void);

int G[MAXN][MAXN];//weight を記録した隣接行列
int n = 0;//sum of weight


int main(){

  int i = 0, j = 0;
  int m = 0,sum = 0;
  
  scanf("%d",&n);

  for(i = 0; i < n; i++){
    
    for(j = 0; j < n; j++){
      
      scanf("%d",&m);
      if(m == -1)G[i][j] = INF;
      else G[i][j] = m;
      
    }
    
  }

  sum = MST();

  printf("%d\n",sum);
  
  return 0;
  
}

int MST(){
  
  int d[MAXN];//V-TとTをつなぐ辺の中で重み最小の辺の重み
  int pi[MAXN];//MSTにおける頂点vの親
  int color[MAXN];
  int i = 0;
  int u = 0, v = 0;
  int mini = 0, sum = 0;

  for(i = 0; i < n; i++){
    d[i] = INF;
    pi[i] = NIL;
    color[i] = WHITE;
  }
  
  d[0] = 0;

  while(1){
    
    mini = INF;
    u = -1;
    for(i = 0; i < n; i++){
      
      if(color[i] != BLACK && d[i] < mini){
	mini = d[i];
	u = i;
      }
      
    }

    if(u == -1)break;

    color[u] = BLACK;

    for(v = 0; v < n; v++){
      
      if(color[v] != BLACK && G[u][v] != INF){
	
	if(G[u][v] < d[v]){
	  pi[v] = u;
	  d[v] = G[u][v];
	  color[v] = GRAY;
	  //sum += d[v];
	  //printf("%d\n",&d[v]);
	}
	
      }
      
    }
 
  }
  
  for(i = 0; i < n; i++){
    if(pi[i] != NIL)sum += G[i][pi[i]];
  }
  
  return sum;
  
}

