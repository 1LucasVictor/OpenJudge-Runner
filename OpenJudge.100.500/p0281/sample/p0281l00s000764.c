#include<stdio.h>
#define N 101
#define W 0
#define B 1
#define INF 1000000000
int n,w[N][N],d[N];
 
void dijkstra(){
  int i,j,u,v,c[N];
  int mincost;
  for(u=0;u<n;u++){
    d[u]=INF;
    c[u]=W;
  }
  d[0]=0;
  
  while(1){
    mincost = INF;
    for(i=0;i<n;i++){
      if(c[i]!=B&&d[i]<mincost){
    u = i;
    mincost = d[i];
      }
    }
    if(mincost==INF) break;
    c[u]=B;
    for(v=0;v<n;v++){
      if(c[v]!=B && d[u]+w[u][v]<d[v]){
    d[v] =d[u]+w[u][v];
      }
    }
  }
}
 
 
int main(){
  int i,j;
  int u,k,v,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      w[i][j]=INF;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      w[u][v]=c;
    }
  }
  dijkstra();
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
  return 0;
}