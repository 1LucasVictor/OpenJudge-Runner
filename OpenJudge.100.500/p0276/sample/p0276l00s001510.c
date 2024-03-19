#include<stdio.h>

#define N 100

int main()
{
  int a,i,j;
  int A[N][N] = {0};
  int s,t,u;
  
  scanf("%d", &a);
  
  for (i=0;i<a;i++){
    scanf("%d%d",&s,&t);
    for (j=0;j<t;j++) {
      scanf("%d",&u);
      A[s-1][u-1]=1;
    }
  }
  
  for (i=0;i<a;i++){
    for (j=0;j<a-1;j++){
      printf("%d ",A[i][j]);
    }
    printf("%d\n",A[i][j]);
  }

  return 0;
}

