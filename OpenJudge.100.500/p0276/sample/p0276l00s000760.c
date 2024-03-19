#include<stdio.h>

int main(){
  int M[100][100];
  int n,u,k,v,i,j;

  scanf("%d",&n);
  for(i = 0;i <n;i++){
    for(j=0;j<n;j++)M[i][j]=0;
  }

  for(i = 0;i < n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      M[u][v] = 1;
    }
  }

  for(i = 1;i <=  n;i++){
    for(j = 0;j<n;j++){
      if(j)printf(" ");
      printf("%d",M[i][j]);
    }
    printf("\n");
  }
  return 0;
}