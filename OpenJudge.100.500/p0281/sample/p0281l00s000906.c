#include <stdio.h>
#define N 101
#define INF 100000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,mat[N][N];

void dijkstra(){
  int minv,i,v;
  int d[N],color[N];

  for(i=0;i<n;i++){
    d[i]=INF;
    color[i]=WHITE;
  }
  d[0]=0;
  color[0]=GRAY;
  while(1){
    minv=INF;
    int u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i]&&color[i]!=BLACK){
        u=i;
        minv=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && mat[u][v]!=INF){
        if(d[v]>d[u]+mat[u][v]){
          d[v]=d[u]+mat[u][v];
          color[v]=GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    if(d[i]==-1) printf("-1\n");
    else printf("%d\n",d[i]);
  }
}

int main(){
  int u,k,c,v;
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      mat[i][j]=INF;
    }
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      mat[u][v]=c;
    }
  }

  dijkstra();
return 0;
}