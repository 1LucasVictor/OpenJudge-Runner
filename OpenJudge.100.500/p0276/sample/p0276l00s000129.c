#include <stdio.h>
#define N 101
int main(){

  int i,j,n,k,A[N][N],B[N][N];
  
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d%d",&i,&k);
    if(k!=0){
    for(j=1;j<=k;j++){
      scanf("%d",&A[i][j]);
    }
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      B[i][A[i][j]]=1;
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<n;j++){
  printf("%d ",B[i][j]);
    }
    printf("%d\n",B[i][n]);
  }
  return 0;
}