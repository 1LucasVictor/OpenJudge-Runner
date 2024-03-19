#include<stdio.h>
#define MAX 100
#define INFTY (1<<21)
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[MAX][MAX];

void dijkstra(){
  int i,u,minv,d[MAX],color[MAX];
  for(i = 0 ; i < n ; i++){
    d[i] = INFTY;
    color[i] = WHITE;
  }
  d[0] = 0;
  color[0] = GRAY;
  while(1){
    minv = INFTY;
    u = -1;
    for(i = 0 ; i < n ; i++){
      if(minv > d[i] && color[i] != BLACK){
	u = i;
	minv = d[i];
      }
    }
    if(u == -1)break;
    color[u] = BLACK;
    for(i = 0 ; i < n ; i++){
      if(color[i] != BLACK && M[u][i] != INFTY){
	if(d[i] > d[u] + M[u][i]){
	  d[i] = d[u] + M[u][i];
	  color[i] = GRAY;
	}
      }
    }
  }
  for(i = 0 ; i < n ; i++){
    printf("%d %d\n",i,d[i] == INFTY ? -1 : d[i]);
  }
}

int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i = 0 ; i < n ; i++){
    for(j = 0 ; j < n ; j++){
      M[i][j] = INFTY;
    }
  }
  for(i = 0 ; i < n ; i++){
    scanf("%d %d",&u,&k);
    for(j = 0 ; j < k ; j++){
      scanf("%d %d",&v,&c);
      M[u][v] = c;
    }
  }
  dijkstra();
  return 0;
}

