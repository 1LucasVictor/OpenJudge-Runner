#include<stdio.h>
int main(){

  int i,j,k,num1,num2,num3;
 int A[100][100],B[100][100],C[100][100];


  scanf("%d%d%d",&num1,&num2,&num3);

  for(i=0;i<num1;i++){
    for(j=0;j<num2;j++){
      scanf("%d",&A[i][j]);
    }}

  for(i=0;i<num2;i++){
    for(j=0;j<num3;j++){
      scanf("%d",&B[i][j]);
    }}


  for(i=0;i<num1;i++){
    for(j=0;j<num3;j++){
      C[i][j]=0;

  for(k=0;k<num2;k++){
    C[i][j] += A[i][k]*B[k][j];
  }}}

for(i=0;i<num1;i++){
    for(j=0;j<num3-1;j++){
      printf("%d ",C[i][j]);
    }
    printf("%d",C[i][num3-1]);
    printf("\n");
}

 return 0;
}