#include <stdio.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
static const int INFTY = (1<<21);

int A[MAX][MAX],n,v,i;

int prim(){
  int u,mincost,sum=0;
  int d[MAX],p[MAX],color[MAX];
 
  for(i=0;i<n;i++){
    d[i]=INFTY;
    p[i]=-1;
    color[i]=WHITE;
  }
 
  d[0]=0;
   
  while(1){
    mincost=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(mincost>d[i]&&color[i]!=BLACK){
        u=i;
        mincost=d[i];
      }
    }
    if(u==-1)  break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&A[u][v]!=INFTY){
        if(d[v]>A[u][v]){
          d[v]=A[u][v];
          p[v]=u;
          color[v]=GRAY;
        }
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1) sum+=A[i][p[i]];
  }
  return sum;
}

int main(){
  int e,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      A[i][j]=(e==-1)?INFTY:e;
    }
  }
  printf("%d\n",prim());
  return 0;
}