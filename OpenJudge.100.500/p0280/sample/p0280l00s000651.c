#include <stdio.h>
#define MAX 100
#define NIL -1
#define INF 200000
#define WHITE 0
#define BLACK 2
#define GRAY 1
int n,A[MAX][MAX];
void prim(){
  int sum=0,u,v,i,d[MAX],pi[MAX],mincost;
  int color[MAX];
  for(i=0;i<n;i++){
    d[i]=INF;
    pi[i]=NIL;
    color[i]=WHITE;
  }
  d[0]=0;
  while(1){

    mincost=INF;
    u=-1;
    for(i=0;i<n;i++){
      if(color[i]!=BLACK&&d[i]<mincost){
	mincost=d[i];
	u=i;
      }
    }
    if(u==-1)break;
    color[u]=BLACK;
    for(v=0;v<n;v++){
      if(color[v]!=BLACK&&A[u][v]!=INF){
	if(A[u][v]<d[v]){
	  d[v]=A[u][v];
	  pi[v]=u;
	  color[v]=GRAY;
	}

      }
	

    }
  }
    for(i=0;i<n;i++){
      if(pi[i]!=-1)sum+=A[i][pi[i]];
    }
  
  printf("%d\n",sum);
}
int main(){
  int i,j,x;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
   
   scanf("%d",&A[i][j]);
   if(A[i][j]==-1)A[i][j]=INF;
	}
  }
  prim();



  return 0;
}

