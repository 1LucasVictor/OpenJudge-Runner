#include<stdio.h>
#include<math.h>
#define MAX 100
#define WHITE 0
#define GRAY 1
#define BLACK 2

int n,M[MAX][MAX];

int prim(){
  int i,u,v,minv;
  int d[MAX],p[MAX],color[MAX];

  for(i=0;i<n;i++){
    d[i]=INFINITY;
    p[i]=-1;
    color[i]=WHITE;
  }
  d[0]=0;

  while(1){
    minv=INFINITY;
    u=-1;
    for(i=0;i<n;i++){
      if(minv>d[i] && color[i]!=BLACK){
	u=i;
	minv=d[i];
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && M[u][v]!=INFINITY){
	if(d[v]>M[u][v]){
	  d[v]=M[u][v];
	  p[v]=u;
	  color[v]=GRAY;
	}
      }
    }
  }
  
  int sum=0;
  for(i=0;i<n;i++){
    if(p[i]!=-1)sum+=M[i][p[i]];
  }
  return sum;
}

int main(){
  int i,j,e;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&e);
      if(e==-1)M[i][j]=INFINITY;
      else M[i][j]=e;
    }
  }
  printf("%d\n",prim());
  return 0;
}

