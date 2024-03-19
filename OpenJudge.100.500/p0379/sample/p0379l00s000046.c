#include<stdio.h>

int main()
{
  int A[100][100],b[100],out[100],n,m,i,j,sum;

  scanf("%d %d ",&n,&m);

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&A[i][j]);
    }
  }

  for(i=0;i<m;i++){
    scanf("%d",&b[i]);
  }

  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      sum+=A[i][j]*b[j];
    }
    out[i]=sum;
    sum=0;
  }
  for(i=0;i<n;i++){
    printf("%d\n",out[i]);
  }

  return 0;
}