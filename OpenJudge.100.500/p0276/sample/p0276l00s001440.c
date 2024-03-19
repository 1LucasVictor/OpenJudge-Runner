#include<stdio.h>
int A[101][101];
int main(){
  int n,i,j,k,id,kn;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d%d",&id,&kn);
    for(j=0;j<kn;j++){
      scanf("%d",&k);
      A[id][k]=1;
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n-1;j++){
      printf("%d ",A[i][j]);
    }
    printf("%d\n",A[i][j]);
  }
  return 0;
}
  
 

