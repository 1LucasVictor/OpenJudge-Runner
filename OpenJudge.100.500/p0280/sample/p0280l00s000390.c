#include<stdio.h>
#include<math.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2
#define INFTY -1
//float inf=INFINITY;
int inf=(1<<21);
int n,a[MAX][MAX];

int prim(){
  int i,u,v,mincost,sum=0;
  int color[MAX],d[MAX],p[MAX];
  for(i=0;i<n;i++){
    d[i]=inf;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){
    mincost=inf;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){	
	mincost=d[i];
	u=i;
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && a[u][v]!=inf){
	if(d[v]>a[u][v]){
	  d[v]=a[u][v];
	  p[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=a[i][p[i]];
  }
  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e==-1)e=inf;
      a[i][j]=e;
    }
  }
  printf("%d\n",prim());
  return 0;
}

