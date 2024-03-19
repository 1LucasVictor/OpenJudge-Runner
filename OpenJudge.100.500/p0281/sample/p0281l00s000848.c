#include <stdio.h>
#define INF 214748364

void dijkstra();
void initializeSingleSource();

int n,color[100],d[100],dis[100],pi[100],w[100][100];

int main(){
  int i,j,c,u,k,v;
  
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      w[i][j]=-1;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&c,&v);
      w[u][c]=v;
    }
  }
  dijkstra();

  for(i=0;i<n;i++) printf("%d %d\n",i,d[i]);

  return 0;
}

void dijkstra(){
  int i,j,u,v,mincost;
  
  initializeSingleSource();

  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=1&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }

    if(mincost==INF) break;

    color[u]=1;

    for(v=0;v<n;v++){
      if(color[v]!=1&&d[u]+w[u][v]<d[v]&&w[u][v]!=-1){
	pi[v]=u;
	d[v]=w[u][v]+d[u];
      }
    }
  }
  
  /*for(i=0;i<n;i++){
    dis[i]=d[i];
    j=i;
    while(pi[j]!=-1){
      dis[i]+=d[pi[j]];
      j=pi[j];
    }
    }*/
}

void initializeSingleSource(){
  int v;

  for(v=0;v<n;v++){
    d[v]=INF;
    pi[v]=-1;
    color[v]=-1;
  }
  d[0]=0;
}