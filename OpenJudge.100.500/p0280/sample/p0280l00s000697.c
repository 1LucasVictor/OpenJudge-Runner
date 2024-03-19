#include<stdio.h>
#include<stdlib.h>
#define MAX 101
#define INF 2001

int main(){
  int i,j,n,u,v,result=0,mincost,A[MAX][MAX],color[MAX],d[MAX],pi[MAX];

  scanf("%d",&n);
  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      scanf("%d",&A[i][j]);
      if(A[i][j]==-1)A[i][j]=INF;
    }
  }

  for(u=1 ; u<=n ; u++){
    d[u]=INF;
    color[u]=0;
  }
  d[1]=0;

  while(1){
    mincost=INF;
   for(i=1 ; i<=n ; i++){
     if(color[i] != 1 && d[i] < mincost){
       mincost=d[i];    
       u=i;
     }
   }
   
     if(mincost==INF)break;
     color[u] = 1;

     for(v=1 ; v<=n ; v++){
       if(color[v] != 1 && A[u][v] < d[v]){
	 d[v]=A[u][v];
       }
     }
  }
  
  for(i=1 ; i<=n ; i++){
    result += d[i];
  }

  printf("%d\n",result);

  return 0;
}