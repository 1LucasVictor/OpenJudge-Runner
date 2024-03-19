#include<stdio.h>
#define N 101
#define INF 1000000
#define BLACK 2

int n,g[N][N],d[N];

void Dijkstra(){
  int i,min,u=0,color[N];

  for(i=0;i<n;i++){
    d[i]=INF;
    color[i]=0;
  }

  d[0]=0;
  color[0]=1;

  while (1) {
    min=INF;
    u=-1;

    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < min){
        min=d[i];
        u=i;
      }
    }

    if(min == INF) break;

    color[u]=BLACK;

    for(i=0;i<n;i++){
      if(color[i] != BLACK && g[u][i] != INF && d[u]+g[u][i] < d[i]){
        d[i]=d[u]+g[u][i];
        color[i]=1;
      }
    }
  }
}

int main(){

  int i,j,k,a,v,c;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++) g[i][j]=INF;
  }

  for(i=0;i<n;i++){
    scanf("%d %d",&a,&k);
    for(j=0;j<k;j++){
      scanf("%d %d",&v,&c);
      g[i][v]=c;
    }
  }

  Dijkstra();

  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);

  return 0;
}

