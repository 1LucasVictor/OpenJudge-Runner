#include <stdio.h>

int main(void){
  int i,j,k,n,m,l,a[100][100],b[100][100];
  long int s;
  scanf("%d%d%d",&n,&m,&l);

//行列A
  for(i=0;i<n;i++)
    for(j=0;j<m;j++)
      scanf("%d",&a[i][j]);

//行列B
  for(i=0;i<m;i++)
    for(j=0;j<l;j++)
      scanf("%d",&b[i][j]);

//行列C
  for(i=0;i<n;i++)
    for(j=0;j<l;j++){
      s = 0;
      for(k=0;k<m;k++)
        s += a[i][k] * b[k][j] ;
      printf("%ld", s);
      if(j+1 == l)
        printf("\n");
      else
        printf(" ");
    }

  return 0;
}