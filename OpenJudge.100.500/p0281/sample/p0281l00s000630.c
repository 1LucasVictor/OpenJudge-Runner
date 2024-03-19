#include<stdio.h>
#define N 100
#define INF 10000000
#define NIL -1
void initializeSingleSource(void);
void dijkstra(void);
int n,G[N][N],d[N],p[N],color[N];

int main(){
  int i,j,u,k,v,c;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=INF;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      G[u][v]=c;
    }
  }
  dijkstra();
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}
void initializeSingleSource(void){
  int v;
  for(v=0;v<n;v++){
    d[v]=INF;
    p[v]=NIL;
    color[v]=0;
  }
  d[0]=0;
}
void dijkstra(){
  int i,u,v,min;

  initializeSingleSource();

  while(1){
    min=INF;
    for(i=0;i<n;i++){
      if(color[i] != 1 && d[i] < min){
        min=d[i];
        u=i;
      }
    }
    if(min==INF){
      break;
    }
    color[u]=1;
    for(v=0;v<n;v++){
      if(d[u]+G[u][v] < d[v]){
        p[v]=u;
        d[v]=G[u][v]+d[u];
      }
    }
  }
  
}