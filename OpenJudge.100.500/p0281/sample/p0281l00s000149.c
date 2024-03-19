#include <stdio.h>
#define INF 100000000
 
void dijkstra();
void initializeSingleSource();
 
int n,h[100],d[100],dis[100],pi[100],G[100][100];

int main(){
  int i,j,c,u,k,v;
   
  scanf("%d",&n);
 
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)   G[i][j]=-1;    
  }
   
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&c,&v);
      G[u][c]=v;
    }
  }
  dijkstra();
 
  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);
 
  return 0;
}
 
void dijkstra(){
  int i,j,u,v,min;
   
  initializeSingleSource();
 
  while(1){
    min=INF;
    for(i=0;i<n;i++){
      if(h[i]!=1&&d[i]<min){
    min=d[i];
    u=i;
      }
    }
 
    if(min==INF) break;
 
    h[u]=1;
 
    for(v=0;v<n;v++){
      if(h[v]!=1&&d[u]+G[u][v]<d[v]&&G[u][v]!=-1){
    pi[v]=u;
    d[v]=G[u][v]+d[u];
      }
    }
  }
   
}
 
void initializeSingleSource(){
  int v; 
  for(v=0;v<n;v++){
    d[v]=INF;
    pi[v]=-1;
    h[v]=-1;
  }
  d[0]=0;
}