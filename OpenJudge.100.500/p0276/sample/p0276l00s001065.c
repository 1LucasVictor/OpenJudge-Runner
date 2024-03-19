#include <stdio.h>
#define N 101
int A[N][N];

int main(){
  int i,j,n,count,hen,where;

  scanf("%d",&n);
  for(i=0;i<=n;i++)
    for(j=0;j<n;j++)
      A[i][j] = 0;

  for(i=0;i<n;i++){
    scanf("%d %d",&count,&hen);
    while(hen>0){
      scanf("%d",&where);
      A[count-1][where-1] = 1;
      hen--;
    }
  }

  for(i=0;i<n;i++){
    for(j=0;j<n-1;j++){
      printf("%d ",A[i][j]);
    }
    printf("%d\n",A[i][n-1]);
  }
  
  return 0;
}
