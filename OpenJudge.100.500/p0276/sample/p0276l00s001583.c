#include <stdio.h>

int main(){
  int i,j,n,u,k,v,g[100][100];
  scanf("%d",&n);
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++) g[i][j] = 0;
  }
  for(i = 0; i < n; i++){
    scanf("%d%d",&u,&k);
    for(j = 0; j < k; j++){
      scanf("%d",&v);
      g[u - 1][v - 1]=1;
    }
  }
  for(i = 0; i < n; i++){
    for(j = 0; j < n; j++){
      if(j) printf(" ");
      printf("%d",g[i][j]);
    }
    printf("\n");
  }
  return 0;
}

