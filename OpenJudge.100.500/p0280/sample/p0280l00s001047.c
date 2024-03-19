#include <stdio.h>

#define M 120
#define NIL -1
#define INF 100000
#define black 1
#define white 0
#define gray 2

int prim(int);

int find[M];
int color[M];
int p[M];
int A[M][M];

int main(){
  int len;
  int i,j;
  

  scanf("%d",&len);

  for(i=0;i<len;i++){
    for(j=0;j<len;j++){
      scanf("%d",&A[i][j]);
      if(A[i][j]==NIL) A[i][j]=INF;
    }
  }
  printf("%d\n",prim(len));
  
  return 0;
}

int prim(int len){
  int i;
  int mincost,u,sum=0;
  
  for(i=0;i<len;i++){
    find[i]=INF;
    color[i]=white;
    p[i]=NIL;
  }

  find[0]=0;

  while(1){
    mincost=INF;
    u=NIL;
    for(i=0;i<len;i++){
      if(color[i]!=black && find[i]<mincost){
	mincost=find[i];
	u=i;
      }
    }
    
    if(u==NIL) break;
    color[u]=black;
    
    for(i=0;i<len;i++){
      if(A[u][i]!=INF && color[i]!=black){
	if(A[u][i] < find[i]){
	  p[i]=u;
	  find[i]=A[u][i];
	  color[i]=gray;
	}
      }
    }
  }
  
  for(i=0;i<len;i++){
    if(p[i]!=NIL) sum+=A[i][p[i]];
  }
  
  return sum;
}

