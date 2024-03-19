#include<stdio.h>
#define MAX 100
#define INF (1<<21)
#define B 2
#define G 1
#define W 0

int n,M[MAX][MAX];

int prim(){
  int i,u,v,min,sum,d[MAX],p[MAX],color[MAX];
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=W;
  }
  d[0]=0;
  while(1){
    min=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i]&&color[i]!=B){
        u=i;
        min=d[i];
      }
    }
    if(u==-1) break;
    color[u]=B;
    for(v=0;v<n;v++){
      if(color[v]!=B&&M[u][v]!=INF){
        if(d[v]>M[u][v]){
          d[v]=M[u][v];
          p[v]=u;
          color[v]=G;
        }
      }
    }
  }
  sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1) sum+=M[i][p[i]];
  }
  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      M[i][j]=(e==-1) ? INF :e;
    }
  }
  printf("%d\n",prim());
  return 0;
}