#include<stdio.h>

static const int N=100;

int main(){

  int G[N][N];
  int i,j,n,u,k,v;

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++)G[i][j];
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      G[u][v]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j)printf(" ");
      printf("%d",G[i][j]);
    }

    printf("\n");
  }
    return 0;

  }
