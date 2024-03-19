#include <stdio.h>
#define N 105
int main(){

  int i,j,n,k,y,A[N][N],B[N][N];

  for(i=1;i<=100;i++){
    for(j=1;j<=100;j++){
      A[i][j]=0;
      B[i][j]=0;
    }
  }
  scanf("%d",&n);

  for(i=1;i<=n;i++){
    scanf("%d%d",&y,&k);
   
    for(j=1;j<=k;j++){
      scanf("%d",&A[i][j]);
    
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