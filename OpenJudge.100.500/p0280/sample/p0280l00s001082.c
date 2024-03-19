#include <stdio.h>
#define WHITE 1
#define BLACK 0
#define INF 1000000
#define NIL 1000000
int n;
int G[100][100];
int prim(int);
int main() {
  int w=0;
  int s;
  int i,j;
  
  

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      scanf("%d",&G[i][j]);
    }
  }
  
  
  
  s=0;
  w=prim(s);
    
   

  printf("%d\n",w);

  return 0;
}
int prim(int s){
  int i,j,k,l;
  int u,v,a=0;
  int d[100];
  int pi[100];
  int color[100];
  int mincost=0;

  for(u=0;u<n;u++){
    d[u]=INF;
    pi[u]=NIL;
    color[u]=WHITE;
  }
  d[s]=0;
  while(1){
    mincost=INF;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK && d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(mincost==INF) break;

    color[u]=BLACK;
    for(j=0;j<n;j++){
      v=G[u][j];
      if(v!=-1){
	if(color[j]!=BLACK && G[u][j]<d[j]){
	  pi[j]=u;
	  d[j]=G[u][j];
	}
      }
    }
      
     
  }


  for(i=0;i<n;i++){
    a+=d[i];
    
  }
  return a;
}