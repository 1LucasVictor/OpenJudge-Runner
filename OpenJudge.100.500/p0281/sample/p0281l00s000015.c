#include<stdio.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define inf 1000000000

int n,ary[N][N];
int pary[N],eary[N],color[N];

int dijkstra(){
  int i,u,v,mincost,sum=0;
  
  for(i=0;i<n;i++){
    color[i]=WHITE;
    pary[i]=inf;
  }
  pary[0]=0;
  eary[0]=-1;

  while(1){
    mincost=inf;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && pary[i]<mincost){
	mincost=pary[i];
	u=i;
      }
    }
    if(mincost==inf)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && ary[u][v]!=inf){
	if(pary[u]+ary[u][v]<pary[v]){
	  pary[v]=pary[u]+ary[u][v];
	  eary[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
}
int main(){

  int i,j,u,k,v,c,judge;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      ary[i][j]=inf;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      ary[u][v]=c;
    }
  }
  dijkstra();
  for(i=0;i<n;i++){
    if(pary[i]!=inf){
      judge=pary[i];
    }
    else{
      judge=-1;
    }
    printf("%d %d\n",i,judge);
  }
  return 0;
}


