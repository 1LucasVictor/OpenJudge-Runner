#include<stdio.h>
int main(){
  int n,i,v,u,j,k;
  int G[100][100];

  scanf("%d",&n);

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      G[i][j] = 0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&u,&v);
    for(j=0;j<v;j++){
      scanf("%d",&k);
      G[u-1][k-1] = 1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",G[i][j]);
      if(j < n-1)printf(" ");
    }
    puts("");
  }

  return 0;
}