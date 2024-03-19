#include<stdio.h>
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define MAX 101
#define INF 2001
int color[MAX],d[MAX],p[MAX],G[MAX][MAX],n;
int prim(){
  int i,j,u,min,sum=0;
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){
    min=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(min > d[i] && color[i] != BLACK){
	u=i;
	min=d[i];
      }
    }
    if(u==-1) break;
    color[u]=BLACK;
    for(j=0;j<n;j++){
      if(color[j] != BLACK && G[u][j] < d[j]){
	if(d[j] > G[u][j]){
	  d[j]=G[u][j];
	  p[j]=u;
	  color[j]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i] != -1){
      sum+=G[i][p[i]];
    }
  }
  return sum;
}
int main(){
  int i,j,sum;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(G[i][j]==-1) G[i][j]=INF;
    }
  }
  sum=prim();
  printf("%d\n",sum);
  return 0;
}

