#include <stdio.h>

int main(){

  int i,j,m,n,n2,G[100][100];

  scanf("%d",&n);

  for(i=0;i<=n;i++){
    for(j=0;j<=n;j++){
      G[i][j] = 0;
    }
  }

  for(i=1;i<=n;i++){
    scanf("%d %d",&G[i][0],&m);
    for(j=1;j<=m;j++){
      scanf("%d",&n2);
      G[i][n2] = 1;
    }
  }

   
  for(i=1;i<=n;i++){
    for(j=1;j<n;j++){
      printf("%d ",G[i][j]);
    }
    printf("%d\n",G[i][n]);
  }

  return 0;
}