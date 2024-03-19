#include <stdio.h>
#define MAX 1000 
#define INF 10000000
 
int G[MAX][MAX];
int d[MAX];
char color[MAX];
int n;
 

void initializeSingleSource(void){
  int v;
 
  for(v=0;v<MAX;v++){
    d[v]=INF; 
    color[v]='W';
  }
  d[0]=0;
  color[0]='G';
}
void dijkstra(void){
  int mincost,i,u,v;
 
  initializeSingleSource();
 while(1){
    mincost = INF;
    for(i=0;i<n;i++){
      if((color[i]!='B') && (d[i]<mincost)){
    mincost=d[i];
    u=i;
      }
    }
 
    if(mincost==INF) break;
    color[u]='B';
 
    for(v=0;v<n;v++){
      if(color[v]!='B' && G[u][v]!=INF){     
    if(d[v]>d[u]+G[u][v]){
    d[v]=d[u]+G[u][v];
    color[v]='G';
    }
      }
    }
 
  }
 
 
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
}

int main(){
 
  int u,k,i,j,v,c;
   
  scanf("%d",&n);
 for(i = 0; i < n;i++){
    for(j = 0;j < n;j++){
      G[i][j] = INF;
    }
  }
 
  for(i = 0;i < n;i++){
    scanf("%d %d",&u,&k);
    for(j = 0;j < k;j++){
      scanf("%d %d",&v,&c);
      G[u][v] = c; 
    }
  }
 dijkstra();
   
  return 0;
}
 