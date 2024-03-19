#include<stdio.h>
int main()
{
  int n,a,i,j,b,k;
  scanf("%d",&n);
  int arr[n+1][n+1];
  for(i=0;i<n;i++){
    scanf("%d",&a);
    scanf("%d",&k);
    for(j=0;j<k;j++){
      scanf("%d",&b);
      arr[a][b]=1;
    }
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
      if(arr[i][j]!=1)printf("0");
      else printf("1");
      if(j!=n)printf(" ");
    }
    printf("\n");
  }
  return 0;
}

