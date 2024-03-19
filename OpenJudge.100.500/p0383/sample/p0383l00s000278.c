#include<stdio.h>
main(){
  int i,j,k,l,n,m;
  int a[101][101]={0},b[101][101]={0};
  long c[101][101]={0};

  scanf("%d %d %d",&n,&m,&l);

  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      scanf("%d",&a[i][j]);
    }
  }
/*  for(i=1;i<=n;i++){
    for(j=1;j<m;j++) printf("%d ",a[i][j]);
    printf("%d\n",a[i][m]);
  }
*/
  for(i=1;i<=m;i++){
    for(j=1;j<=l;j++){
      scanf("%d",&b[i][j]);
    }
  }
/*  for(i=1;i<=m;i++){
    for(j=1;j<l;j++) printf("%d ",b[i][j]);
    printf("%d\n",b[i][l]);
  }
*/
  for(i=1;i<=n;i++){
    for(j=1;j<=l;j++){
      for(k=1;k<=m;k++){
        c[i][j]=c[i][j]+a[i][k]*b[k][j];
      }
    }
  }

  for(i=1;i<=n;i++){
    for(j=1;j<l;j++) printf("%ld ",c[i][j]);
    printf("%ld\n",c[i][l]);
  }


  return 0;
}