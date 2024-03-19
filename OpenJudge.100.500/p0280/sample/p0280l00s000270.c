#include<stdio.h>
#define N 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define inf 1000000000

int n,ary[N][N];

int prim(){
  int i,u,v,mincost,sum=0;
  int pary[N],eary[N],color[N];

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
	if(ary[u][v]<pary[v]){
	  pary[v]=ary[u][v];
	  eary[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(eary[i]!=-1)sum+=ary[i][eary[i]];
  }
  return sum;
}

int main(){

  int i,j,e;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e==-1){
	ary[i][j]=inf;
      }
      else{
	ary[i][j]=e;
      }
    }
  }
  printf("%d\n",prim());
}

