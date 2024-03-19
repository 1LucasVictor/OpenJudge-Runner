#include<stdio.h>

#define MAX 100

int main( ){
  int i,j,k,v,m,n,u;
   int G[MAX][MAX];

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j] = 0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      G[u][v] = 1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j) printf(" ");
      printf("%d",G[i][j]);
    }
    printf("\n");
  }
  return 0;
}

