#include <stdio.h>

int main()
{
  int a[101][101],b[101][101],c[101][101]={0};
  int n,m,l;
  int i,j,k;
  scanf("%d%d%d",&n,&m,&l);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%d",&a[i][j]);
    }
  }

  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%d",&b[i][j]);
    }
  }
  
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
	c[i][j] +=a[i][k]*b[k][j];
      }
      printf("%d",c[i][j]);
      if(j!=l-1) printf(" ");
      else printf("\n");
    }
  }
  
  return 0;
}