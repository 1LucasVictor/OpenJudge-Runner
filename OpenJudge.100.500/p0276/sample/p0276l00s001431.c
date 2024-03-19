#include<stdio.h>
int main()
{
  int i,j,k,l,m,n;

  scanf("%d",&n);
  int a[n][n];

  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      a[i][j]=0;
    }
  }
  for(i=0;i<n;i++){
    scanf("%d%d",&k,&l);
    for(j=0;j<l;j++){
      scanf("%d",&m);
      a[k-1][m-1]=1;
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(j!=0){
	printf(" ");
      }
      printf("%d",a[i][j]);
    }
    printf("\n");
  }
  
  return 0;
}