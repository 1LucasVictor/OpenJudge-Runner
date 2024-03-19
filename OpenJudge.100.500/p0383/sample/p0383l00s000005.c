#include<stdio.h>
int main(){
  int n,m,l,A[100][100]={},B[100][100]={},i,j,sum[100][100]={},k;
  scanf("%d%d%d",&n,&m,&l);
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&A[i][j]);
  for(i=0;i<m;i++)
    for(j=0;j<l;j++)
      scanf("%d",&B[i][j]);
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
	sum[i][j]+=A[i][k]*B[k][j];
      }
      printf("%d",sum[i][j]);
      if(j!=l-1)
	printf(" ");
      else printf("\n");
    }
  }
  return 0;
}

