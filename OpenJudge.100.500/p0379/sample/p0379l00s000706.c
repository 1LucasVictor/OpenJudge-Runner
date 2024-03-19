#include<stdio.h>
int main(void){
  int n,m,i,j,k;
  scanf("%d %d",&n,&m);
  int a[n][m];
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      scanf("%d",&a[i-1][j-1]);
    }
  }
  int b[m];
  for(j=1;j<=m;j++){
    scanf("%d",&b[j-1]);
  }
  int c[n];
  for(k=1;k<=n;k++){
    c[k-1]=0; //????????????0???
  }
  for(i=1;i<=n;i++){
    for(j=1;j<=m;j++){
      c[i-1]+=a[i-1][j-1]*b[j-1];
    }
    printf("%d\n",c[i-1]);
  }
  return 0;
}