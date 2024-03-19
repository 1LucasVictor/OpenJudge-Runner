
#include<stdio.h>
#define N 100
#define INF 100000000
#define W 0
#define G 1
#define B 2

int color[N],M[N][N],d[N],p[N],n;

void dijkstra(){
  int i,u,v,min;
  for(i=0;i<n;i++){
      color[i]=W;
      d[i]=INF;
  }
  d[0]=0;
  color[0]=G;

  while(1){
    min=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=B && d[i]<min){
        u=i;
        min=d[i];
      }
    }

    if(u==-1) break;
    color[u]=B;

    for(v=0;v<n;v++){
      if(color[v]!=B && M[u][v]!=INF){
        if(d[u]+M[u][v]<d[v]){
          d[v]=d[u]+M[u][v];
          color[v]=G;
        }
      }
    }
  }
}

int main(){
  int k,u,v;

  scanf("%d",&n);

  for(int i=0;i<n;i++)
    for(int j=0;j<n;j++) M[i][j]=INF;

  for(int i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(int j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&M[u][v]);
    }
  }

  /*for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
      printf("%d ",M[i][j]);
    }
    printf("\n");
    }*/

  dijkstra();

  for(int i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

