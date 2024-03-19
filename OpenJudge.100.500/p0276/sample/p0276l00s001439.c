#include <stdio.h>
#define N 200

int main(){
  int i,j,n,m,k,a;
  int Adj[N][N];

  scanf("%d",&n);
  for( i=1 ; i<=n ; i++ ){
    for( j=1 ; j<=n ; j++){
      Adj[i][j]=0;
    }
  }

  for( i=1 ; i<=n ; i++ ){
    scanf("%d%d",&a,&m);
    for( j=1 ; j<=m ; j++){
      scanf("%d",&k);
      Adj[i][k] = 1;
    }
  }

  for( i=1 ; i<=n ; i++ ){
    for( j=1 ; j<=n ; j++){

      if( j == n )printf("%d",Adj[i][j]);
      else printf("%d ",Adj[i][j]);
    }
    printf("\n");
  }
  return 0;
}