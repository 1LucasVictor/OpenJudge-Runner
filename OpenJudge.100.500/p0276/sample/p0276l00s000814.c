#include <stdio.h>
#define N 101

int main() {
  int i,n,t,k,v,j=0,u[N][N];
  scanf("%d",&n);
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++)u[i][j]=0;
  }
  for(i=1;i<=n;i++){
    scanf("%d%d",&t,&k);
    for(j=1;j<=k;j++){
      scanf("%d",&v);
      u[t][v]=1;
    }
  }
  for(int i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j>1)printf(" ");
      printf("%d",u[i][j]);
    }
    printf("\n");
  }
  return 0;
}

