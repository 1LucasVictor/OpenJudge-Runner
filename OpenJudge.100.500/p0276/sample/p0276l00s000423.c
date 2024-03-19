#include<stdio.h>

int main(void){
  int n,i,j,s;
  int A[110][115];
  int B[110][115];

  scanf("%d",&n);




  for(i=1;i<=n;i++){
    for(j=1;j<=n+1;j++){
      A[i][j]=0;
      B[i][j]=0;
    }
  }




  for(i=1;i<=n;i++){
    for(j=1;j<=n+1;j++){
      scanf("%d",&A[i][j]);
      if(j == 2)s=A[i][j];
      if(s+2 == j)break;
    }
  }

  for(i=1;i<=n;i++){
    for(j=3;j<=n+1;j++){
      if(A[i][j]!=0){
	B[i][A[i][j]]=1;
      }
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(j!=1)printf(" ");
      printf("%d ",B[i][j]);
    }
    printf("\n");
  }

  return 0;
}