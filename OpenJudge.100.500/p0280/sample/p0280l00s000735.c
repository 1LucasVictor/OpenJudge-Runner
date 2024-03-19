#include<stdio.h>
#define N 100
#define W 0
#define G 1
#define B 2
#define I 999999999

int g[N][N],n;

int prim(){
  int i,u,v;
  int d[N]={},p[N]={},color[N]={};
  int min,sum=0;
  
  for(i=0;i < n;i++){
    d[i]=I;
    color[i]=W;
    p[i]=-1;
  }
  d[0]=0;


  while(1){
    min=I;
    for(i=0;i < n;i++){
      if(color[i]!=B && d[i]<min){
	min=d[i];
	u=i;
      }
    }

    if(min == I)break;

    color[u]=B;

    for(v=0;v < n;v++){
      if(color[v]!=B && g[u][v]!=-1){
	if(g[u][v]<d[v]){
	  d[v]=g[u][v];
	  p[v]=u;
	  color[v]=G;
	}
      }
    }
  }
  for(i=0;i<n;i++)if(p[i]!=-1)sum+=g[i][p[i]];

  return sum;
}

int main(){
  int j,i;

  scanf("%d",&n);

  for(i=0;i<n;i++)
    for(j=0;j<n;j++) scanf("%d",&g[i][j]);

  printf("%d\n",prim());
  return 0;
}

