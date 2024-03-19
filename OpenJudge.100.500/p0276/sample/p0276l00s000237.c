#include<stdio.h>

int A[100][100];

int main(void){
  int n,m,l,i,j,k;

  scanf("%d",&n);
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      A[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&m,&l);
    for(j=0;j<l;j++){
      scanf("%d",&k);
      A[i][k-1]=1;
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d\t",A[i][j]);
    }
      printf("\n");

  }
  return 0;
}