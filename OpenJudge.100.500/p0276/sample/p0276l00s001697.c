#include <stdio.h>

int main(){

  int n, i, j, k, l, u, v[101][101];

  scanf("%d",&n);
  
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      v[i][j] = 0;
    }
  }
  for(i=1;i<=n;i++){

    scanf("%d",&k);
    scanf("%d",&u);

    for(j=1;j<=u;j++){
      scanf("%d",&l);
      v[k][l]=1;
   
    }
  }

  for(i=1;i<=n;i++){

    printf("%d",v[i][1]);

    for(j=2;j<=n;j++){

      printf(" %d",v[i][j]);
    }
    printf("\n");
  }
  return 0;
}