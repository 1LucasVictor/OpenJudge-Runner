#include<stdio.h>

int main()
{
  int n,x,y,z,i,j;

  scanf("%d",&n);
  int A[n][n];
  for(i=0;i<n;i++){
    for(j=0;j<n;j++)
      A[i][j]=0;
  }

  for(i=0;i<n;i++){
    scanf("%d%d",&x,&y);
    for(j=0;j<y;j++)
      {scanf("%d",&z);
	A[x-1][z-1]=1;}
  }

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      printf("%d",A[i][j]);
      if(j==n-1)printf("\n");
      else printf(" ");
    }
  }
  return 0;
}

