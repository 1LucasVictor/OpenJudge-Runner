#include <stdio.h>
int main(void){
  int r=0,c=0,n,m,a[3][5]={},b[4]={};
  for(scanf("%d %d",&n,&m);r<n;r++)for(c=0;c<m;c++)scanf(" %d",&a[r][c]);
  for(c=0;c<m;c++)scanf(" %d",&b[c]);
  for(r=0;r<n;r++){
    for(c=0;c<m;c++)a[r][4]+=a[r][c]*b[c];
    printf("%d\n",a[r][4]);
  }
  return 0;
}