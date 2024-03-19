#include <stdio.h>
int main(){
  int n,n1,n2,A[100][100],j,d,i;

  for(i=0;i<100;i++){
    for(j=0;j<100;j++){
      A[i][j]=0;
    }
  }

  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&n1,&n2);
    for(j=0;j<n2;j++){
      scanf("%d",&d);
      A[i][d-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<4;j++){
      printf(" %d",A[i][j]);
      }
    printf("\n");
  }
  return 0;
}