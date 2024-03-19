#include<stdio.h>
#define N 105
#define DC -1
#define inf 1000000
#define W 0
#define B 1
int n;
int d[N];
int pi[N];
int color[N];

void initializeSingleSource(int s){
  int i;
  for(i=0;i<n;i++){
    d[i]=inf;
    pi[i]=DC;
  }
  d[s]=0;
}
void dijkstra(int hako[N][N]){
  int i,j,u,v,mincost;
  initializeSingleSource(0);
  while(1){
    mincost = inf;
    for(i=0;i<n;i++){
      if(color[i]!=B && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==inf) break;
    color[u]=B;
    for(i=0;i<n;i++){
      if(hako[u][i]!=DC){
	v=i;
	if(color[v]!=B && d[u]+hako[u][v]<d[v]){
	  pi[v]=u;
	  d[v]=d[u]+hako[u][v];
	}
      }
    }
  }
  
}
int main(){
  int i,j,u,k,x;
  int hako[N][N];
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      hako[i][j]=DC;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&x);
      scanf("%d",&hako[u][x]);
	}
  }
  dijkstra(hako);
  for(i=0;i<n;i++){
    printf("%d %d",i,d[i]);
    printf("\n");
    }

  return 0;
}

