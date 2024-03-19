#include<stdio.h>
int main(void)
{
  int n,m,sum=0;
  int A[100][100];
  int b[100];
  scanf("%d %d",&n,&m);
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      scanf("%d ",&A[i][j]);
    }
  }
  for(int i=0;i<m;i++){
    scanf("%d",&b[i]);
  }
  for(int i=0;i<n;i++){
    sum=0;
    for(int j=0;j<m;j++){
      sum+=A[i][j]*b[j];
    }
    printf("%d\n",sum);
  }
  return 0;
}   
