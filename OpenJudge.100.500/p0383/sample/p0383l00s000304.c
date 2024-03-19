#include<stdio.h>
main(){
  int n,m,l,i,j,k;
  double a[100][100],b[100][100],c[100][100]={};
  scanf("%d%d%d",&n,&m,&l);
  for(i=0;i<n;i++){
    for(j=0;j<m;j++){
      scanf("%lf",&a[i][j]);
    }
  }
  for(i=0;i<m;i++){
    for(j=0;j<l;j++){
      scanf("%lf",&b[i][j]);
    }
  }
  for(i=0;i<n;i++){
    for(j=0;j<l;j++){
      for(k=0;k<m;k++){
      c[i][j]+=a[i][k]*b[k][j];
      }
      if(j) printf(" ");
      printf("%.0f",c[i][j]);
    }
    printf("\n");
  }
  return 0;
}