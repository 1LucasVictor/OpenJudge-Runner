#include<stdio.h>

#define MAX 101

int G[MAX][MAX];

int main(){
  int n,i,j,k,u;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d %d",&u,&k);
    for(j=0;j<k;j++){
      int v;
      scanf("%d",&v);
      G[u][v]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j!=n)printf("%d ",G[i][j]);
      else printf("%d",G[i][j]);
    }
    printf("\n");
  }
  return 0;
}

