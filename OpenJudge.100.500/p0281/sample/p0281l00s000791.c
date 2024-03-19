#include <stdio.h>
#include <limits.h>
#define inf INT_MAX
#define white 0
#define gray 1
#define black 2
#define nil -1

int arr[100][100];
int d[100];
int pi[100];
int color[100];

void dijkstra();
int n;

int main(){
 
  int i,j,k,u,v,c;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      arr[i][j]=inf;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d%d",&v,&c);
      arr[u][v]=c;
    }
  }

  dijkstra();

  for(i=0;i<n;i++){
    printf("%d %d\n",i,d[i]);
  }
  return 0;
}

void dijkstra(){
  int mincost;
  int i,v,u;

  for(i=0;i<n;i++){
    d[i]=inf;
    color[i]=white;
    pi[i]=nil;
  }

  d[0]=0;
  
  while(1){
    u=nil;
    mincost=inf;
    for(i=0;i<n;i++){
      if(color[i]!=black&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==inf) break;
    color[u]=black;
    
    for(v=0;v<n;v++){
      if(color[v]!=black && arr[u][v]!=inf){
        if(d[v]>d[u]+arr[u][v]){
	  pi[v]=u;
	d[v]=d[u]+arr[u][v];
	color[v]=gray;
	}
      }
    }
  }
  
}

