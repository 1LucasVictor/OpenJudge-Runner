#include<stdio.h>

int G[101][101];

int main(){
  int u,n,i,j,c,k;


  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d %d",&u,&c);
    for(j=1;j<=c;j++){
      scanf("%d",&k);
      G[u][k] = 1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      printf("%d",G[i][j]);
      if (j != n) printf(" ");
    }
    printf("\n");
  }

  return 0;
  
}

