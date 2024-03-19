#include<stdio.h>

int main(){
  int G[100][100];
  int n,i,j,u,k,v;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j]=0;
    }
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
      if(j>0)printf(" ");
      printf("%d",G[i][j]);
    }
    printf("\n");
  }
  return 0;
}

