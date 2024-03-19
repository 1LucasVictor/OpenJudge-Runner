#include <stdio.h>
#define MAX 100
#define INFTY 100000000
#define WHITE 0
#define GRAY 1
#define BLACK 2
 
int M[MAX][MAX],n;
 
void dijkstra(int s){
  int i,u,v,minv;
  int d[MAX],p[MAX],color[MAX];
 
  for(i=0; i<n; i++){
    d[i] = INFTY;
    color[i] = WHITE;
    d[s] = 0;
    p[s] = -1;
  }
 
  while(1){
    minv = INFTY;
      for(i=0; i<n; i++){
    if(color[i] != BLACK && d[i] < minv){
      minv = d[i];
      u = i;
    }
      }
    if(minv == INFTY) break;
    color[u] = BLACK;
 
    for(v=0; v<n; v++){
      if(color[v] != BLACK && M[u][v] != INFTY){
    if(d[u] + M[u][v] < d[v]){
      d[v] = d[u] + M[u][v];
      p[v] = u;
      color[v] = GRAY;
    }
      }
    }
  }
  for(i=0; i<n; i++){
    printf("%d ",i);
    if(d[i] == INFTY) printf("-1\n");
    else printf("%d\n",d[i]);
  }
}
 
 
int main(){
  int i,j,u,k,v,c;
  scanf("%d",&n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      M[i][j] = INFTY;
    }
  }
 
  for(i=0; i<n; i++){
    scanf("%d%d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d%d",&v,&c);
      M[u][v] = c;
    }
  }
 
  dijkstra(0);
 
  return 0;
}