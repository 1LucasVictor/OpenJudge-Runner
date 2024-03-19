#include <stdio.h>

#define MAX 100

int main( ){
  int n,i,j,v[MAX+1][MAX+1],u,k,a;

  scanf("%d",&n);


for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      v[i][j] = 0;
    }
 }  
  for(i=1;i<=n;i++){
    scanf("%d%d",&u,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&a);
      v[u][a] = 1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d ",v[i][j]);
    }
    printf("\n");
  }
  return 0;
}