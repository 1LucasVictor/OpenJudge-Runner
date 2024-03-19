#include<stdio.h>
#include<limits.h>

#define N 2001
#define nil -1
#define WHITE 0
#define BLACK 1

int n,G[N][N];

int prim(int , int);

int main(){

  int i,j;
  
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  

  printf("%d\n",prim(0,1));
  
  return 0;
}


int prim(int w , int r){

  int i,u,v,d[N],pi[N],color[N],mincost,sum=0;

  for(u=0;u<n;u++){
    d[u]=INT_MAX;
    pi[u]=nil;
    color[u]=WHITE;
  }
  d[r]=0;

  while(1){

    mincost=INT_MAX;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
      if(mincost==INT_MAX) break;

      color[u]=BLACK;

      for(v=0;v<n;v++){
	if(G[u][v]!=-1) w=G[u][v];
	if(color[v]!=BLACK && w<d[v]){
	  pi[v]=u;
	  d[v]=w;
	}
      }
      }
  for(i=0;i<n;i++) sum+=d[i];

  return sum;
}