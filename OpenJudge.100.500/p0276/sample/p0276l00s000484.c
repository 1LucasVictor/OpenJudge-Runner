#include <stdio.h>

int main(){
  int n,u,k,v,G[100][100];
  int i,j;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=0;
    }
  }
  
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      G[u-1][v-1]=1;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d ",G[i][j]);
    }
    printf("\n");
  }

  return 0;
}