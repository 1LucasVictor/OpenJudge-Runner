#include <stdio.h>
#include <stdlib.h>

int main()
{
  int mat[101][101];
  int n,i,j,u,k,v;
  for(i=0;i<=100;i++){
    for(j=0;j<=100;j++){
      mat[i][j]=0;
    }
  }
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      mat[u][v]=1;
    }
  }
  for(i=1;i<=n;i++){
    printf("%d",mat[i][1]);
    for(j=2;j<=n;j++){
      printf(" %d",mat[i][j]);
    }
    printf("\n");
  }
  return 0;
}
