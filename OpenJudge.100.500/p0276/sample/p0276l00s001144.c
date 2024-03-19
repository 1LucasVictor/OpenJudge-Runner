#include<stdio.h>
#include<stdlib.h>
int main(){
  int **G,n,u,k,v,i,j;
  scanf("%d",&n);
  G = (int**)malloc(sizeof(int) * (n + 1));
  for(i=0; i<=n; i++){
    G[i] = (int*)malloc(sizeof(int) * (n + 1));
    for(j=1; j<=n; j++) G[i][j] = 0;
  }
  for(i=1; i<=n; i++){
    scanf("%d%d",&u,&k);
    for(j=1; j<=k; j++){
      for(; k>0; k--){
        scanf("%d",&v);
        G[u][v] = 1;
      }
    }
  }
  for(i=1; i<=n; i++) for(j=1; j<=n; j++) printf((j != n ? "%d " : "%d\n"),G[i][j]);
  return 0;
}