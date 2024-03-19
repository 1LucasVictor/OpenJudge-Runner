#include<stdio.h>
#define max 100

int main(){

  int n,i,j,l,k,m;

  scanf("%d",&n);

  int num[n][n];

  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      num[i][j] = 0;
    }
  }

  for(i = 0;i < n;i++){
    scanf("%d %d",&k,&m);
    for(j = 0;j < m;j++){
      scanf("%d",&l);
      num[k - 1][l - 1] = 1;
    }
  }
     
  for(i = 0;i < n;i++){
    for(j = 0;j < n;j++){
      printf("%d ",num[i][j]);
    }
    printf("\n");
  }

  return 0;
}