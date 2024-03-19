#include <stdio.h>
#define N 2000
#define inf 2000000
#define WHITE 1
#define BLACK 2 
void prim();
int n,A[N][N],a=0,d[N],pi[N],color[N],d[N],u;
int main(){
  int i,j;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&A[i][j]);
      
    }
   
  }
  prim();
  
  
  printf("%d\n",a);
  return 0;
}

void prim(){
  int mincost,i,v,u,y;
  for(u=0;u<n;u++){
    d[u]=inf;
    pi[u]=-1;
    color[u]=WHITE;
  }
  d[0]=0;

  while(1){
    mincost=inf;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==inf){
      break;
    }
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK && A[u][v]<d[v]&&A[u][v]!=-1){
	pi[v]=u;
	d[v]=A[u][v];

      }
      
    }
  
  }
  for(y=0;y<n;y++){
      a+=A[y][pi[y]];
    }
}
  
       