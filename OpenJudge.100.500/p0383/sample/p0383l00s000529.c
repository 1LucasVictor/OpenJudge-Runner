#include <stdio.h>
int main(){
  int n,m,l,i,j,k;
  int A[101][101]={};
  int B[101][101]={};
  int C[101][101]={};

  scanf("%d %d %d",&n,&m,&l);

  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i=1;i<=m;i++){
    for(j=1;j<=l;j++){
      scanf("%d",&B[i][j]);
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      for(k=1;k<=l;k++){
	C[i][k]+=A[i][j]*B[j][k];
      }
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=l;j++){
      if(j==l){
	printf("%d",C[i][j]);
      }else{
	printf("%d ",C[i][j]);
      }
    }
    printf("\n");
  }
  return 0;
}