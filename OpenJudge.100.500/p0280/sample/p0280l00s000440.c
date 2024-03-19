#include <stdio.h>
#define N 101
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define NIL -1
#define INF (1<<21)

int n,a[N][N];

int prim(void)
{
  int i,u,v,min,sum=0;
  int d[N],pi[N],color[N];

  for(i=0;i<n;i++){
    d[i]=INF;
    pi[i]=NIL;
    color[i]=WHITE;
  }
  d[0]=0;

  while(1){
    min=INF;
    u=NIL;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<min){
        u=i;
        min=d[i];
      }
    }
    if(u==NIL) break;
    color[u]=BLACK;

    for(v=0;v<n;v++){
      if(color[v]!=BLACK && a[u][v]!=INF){
        if(d[v]>a[u][v]){
          d[v]=a[u][v];
          pi[v]=u;
          color[v]=GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    if(pi[i]!=NIL){
      sum+=a[i][pi[i]];
    }
  }
  return sum;
}

int main(){
  int e,i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      a[i][j]=(e==-1)?INF:e;
    }
  }
  printf("%d\n",prim());

  return 0;
}


