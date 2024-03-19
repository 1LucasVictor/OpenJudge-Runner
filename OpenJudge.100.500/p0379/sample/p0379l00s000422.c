#include<stdio.h>
int main(){
  int gyou,retu,i,j,A[100][100],B[100],C[100],sum=0;

  scanf("%d %d",&gyou,&retu);
  for(i=0;i<gyou;i++){
    for(j=0;j<retu;j++){
      scanf("%d",&A[i][j]);
    }
  }
  for(i=0;i<retu;i++){
    scanf("%d",&B[i]);
  }

  for(i=0;i<gyou;i++){
    for(j=0;j<retu;j++){
      sum+=A[i][j] * B[j];
    }
    printf("%d\n",sum);
    sum = 0;
  }
  return 0;
}

