#include <stdio.h>
#define WHITE 0
#define BLACK 1
#define GRAY 2
#define INF 10000000

int n;

void prim();

int main(){
  int i,j,mincost=0,k,u,color[100],M[100][100],d[100],p[100],ans=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf(" %d",&M[i][j]);
    }
  }
  for(i=0;i<n;i++){
    color[i]=WHITE;
    d[i]=INF;
  }
  d[0]=0;
  p[0]=-1;
  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i] != BLACK && d[i] < mincost){
	mincost = d[i];
	u = i;
      }
    }
    if(mincost == INF){
      break;
    }
    
    color[u]=BLACK;
      
      for(k=0;k<n;k++){
       	if(color[k] != BLACK && M[u][k] != -1){
	  if(M[u][k] < d[k]){
	    d[k] = M[u][k];
	    p[k]=u;
	  }
	}
      }
  }
  for(i=0;i<n;i++){
    ans=ans+d[i];
  }
  printf("%d\n",ans);
  return 0;
}