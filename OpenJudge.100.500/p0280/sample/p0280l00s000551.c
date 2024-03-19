#include <stdio.h>
#define MAX 105
#define INF (1<<21)
int g[MAX][MAX],n,judge[MAX];
int prim();

int main(){
  int i,j;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf ("%d",&g[i][j]);
      if(g[i][j]==-1) g[i][j]=INF;
    }
  }
  printf("%d\n",prim());
  return 0;
}

int prim(){
  int i,u,v,min,d[MAX],p[MAX],sum=0;
  for(i=0;i<n;i++){
    d[i]=INF;
    p[i]=-1;
    judge[i]=0;
  }
  d[0]=0;
  while(1){
    min=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(min>d[i] && judge[i]!=1){
	u=i;
	min=d[i];
      }
    }
    if(u==-1) break;
    judge[u]=1;
    for(v=0;v<n;v++){
      if(judge[v]!=1 && g[u][v]!=INF){
	if(d[v]>g[u][v]){
	  d[v]=g[u][v];
	  p[v]=u;
	}
      }
    }
  }
  for(i=0;i<n;i++){
    if(p[i]!=-1) sum+=g[i][p[i]];
  }
  return sum;
}
  
    
  
  
  

