#include<stdio.h>
#define INFTY 1000000
#define WHITE 0
#define GRAY 1
#define BLACK 2

int M[100][100],n;

void dijkstra(){
  int i,d[100],mincost,color[100],u,v;
  for(i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INFTY;
  }
  d[0]=0;
  color[0]=GRAY;

  while(1){
    mincost=INFTY;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INFTY)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&M[u][v]!=-1){
	if(d[u]+M[u][v]<d[v]){
	  d[v]=d[u]+M[u][v];
	  color[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    printf("%d ",i);
    d[i]==INFTY?-1:d[i];
    printf("%d\n",d[i]);
  }
}

int main(){
  int i,j,u,k,v;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      M[i][j]=INFTY;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      scanf("%d",&M[u][v]);
    }
  }
    dijkstra();
  return 0;
}

