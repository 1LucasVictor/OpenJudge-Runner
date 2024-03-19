#include <stdio.h>

int main(){
  int n,u,v,A[100][100],i,j,k;
  scanf("%d",&n);

  for(i=0;i<n;i++){
    scanf("%d%d",&u,&k);
    for(j=0;j<k;j++){
      scanf("%d",&v);
      A[u-1][v-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      if(A[i][j]==1)
      printf("%d ",A[i][j]);
      else printf("0 ");
    }
    if(A[i][n-1])
    printf("%d\n",A[i][n-1]);
    else printf("0\n");
  }
  return 0;
}

