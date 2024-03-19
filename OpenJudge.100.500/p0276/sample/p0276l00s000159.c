#include <stdio.h>

#define N 100

int main(){
  int A[N][N];
  int i,j,k,n,u,v;

  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d",&u);
    scanf("%d",&k);
    u--;
    for(j=0;j<k;j++){
      scanf("%d",&v);
      v--;
      A[u][v]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j){
        printf(" ");
      }
      printf("%d",A[i][j]);
    }
    printf("\n");
  }
  return 0;
}
