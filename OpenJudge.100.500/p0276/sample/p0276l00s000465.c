#include <stdio.h>
#include <stdlib.h>
#define MAX 100

int n;
int main(){
  int i,j,u,v,k,Adj[MAX][MAX];


  scanf("%d",&n);

  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      Adj[i][j]=0;
    }
  }

  for(i=0 ; i<n ; i++){
    scanf("%d %d",&u,&k);
    for(j=0 ; j<k ; j++){
      scanf("%d",&v);
      Adj[u][v]=1;
    }
  }
  for(i=1 ; i<=n ; i++){
    for(j=1 ; j<=n ; j++){
      printf("%d ",Adj[i][j]);
    }
    printf("\n");
  }
  return 0;
}
   


  