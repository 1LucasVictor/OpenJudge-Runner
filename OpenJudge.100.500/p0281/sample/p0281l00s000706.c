#include<stdio.h>
#define N 100
#define INF 10000000

void DFS(int,int);

int n,size[N],c[N][N],d[N],to[N][N];

int main(int argc,char *argv[]){
  int i,j,u;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&size[u]);
    for(j=0;j<size[u];j++){
      scanf("%d",&to[u][j]);
      scanf("%d",&c[u][j]);
    }
  }

  for(i=0;i<n;i++) d[i] = INF;
  DFS(0,0);
  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }

  return 0;
}

void DFS(int p,int x){
  int i;
  d[p] = x;
  for(i=0;i<size[p];i++){
    if(d[to[p][i]] > x + c[p][i]) DFS(to[p][i],x + c[p][i]);
  }
}