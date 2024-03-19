#include<stdio.h>

int main()
{
  int n,m,l;
  int i,j,k;
  int a[101][101];
  int b[101][101];
  long long int c[101][101];
  scanf("%d %d %d",&n,&m,&l);
  for(i = 0; i < n; i++){
    for(j = 0; j < m; j++){
      scanf("%d",&a[i][j]);
    }
  }
  for(i = 0; i < m; i++){
    for(j = 0; j < l; j++){
      scanf("%d",&b[i][j]);
    }
  }

  for(i = 0; i < n; i++){
    for(j = 0; j < l; j++){
      c[i][j] = 0;
      for(k=0; k < m; k++){
      c[i][j] += a[i][k] * b[k][j];
      }
      if(j!=l-1)
         printf("%lld ",c[i][j]);
      else printf("%lld\n",c[i][j]);
      }
   
  }
  
  return 0;
}
