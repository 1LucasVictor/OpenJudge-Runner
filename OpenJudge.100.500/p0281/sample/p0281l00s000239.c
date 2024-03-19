#include<stdio.h>
#define MAX 100
#define INF (1<<21)
#define W 0
#define G 1
#define B 2

int n, M[MAX][MAX];

void dijkstra(){
  int i, u, v, minv, d[MAX], color[MAX];

  for(i=0; i<n; i++){
    d[i]=INF;
    color[i]=W;
  }

  d[0]=0;
  color[0]=G;

  while(1){
    minv=INF;
    u=-1;
    for(i=0; i<n; i++){
      if(minv>d[i] && color[i] != B){
        u=i;
        minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=B;
    for(v=0; v<n; v++){
      if(color[v]!=B && M[u][v] != INF){
        if(d[v]>d[u]+M[u][v]){
          d[v]=d[u]+M[u][v];
          color[v]=G;
        }
      }
    }
  }
  for(i=0; i<n; i++){
    if(d[i]==INF) d[i]=-1;
    else d[i]=d[i];
    printf("%d %d\n",i,d[i]);
  }
}


int main(){

  int i, j, k, c, u, v;

  scanf("%d",&n);
  for(i=0; i<n; i++){
    for(j=0; j<n; j++){
      M[i][j]=INF;
    }
  }

  for(i=0; i<n; i++){
    scanf("%d%d",&u,&k);
    for(j=0; j<k; j++){
      scanf("%d%d",&v,&c);
      M[u][v]=c;
    }
  }

  dijkstra();

  return 0;
}