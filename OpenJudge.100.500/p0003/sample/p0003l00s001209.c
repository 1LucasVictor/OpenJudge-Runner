#include<stdio.h>

int main(){
  int i;
  int a[2],b[2],c[2],d[2],e[2],f[2];
  double x,y;
  for(i=0;i<2;i++){
    scanf("%d",&a[i]);
    scanf("%d",&b[i]);
    scanf("%d",&c[i]);
    scanf("%d",&d[i]);
    scanf("%d",&e[i]);
    scanf("%d",&f[i]);
  }
  for(i=0;i<2;i++){
    y=(c[i]-(a[i]*(double)(f[i]/d[i])))/(b[i]-(a[i]*(double)(e[i]/d[i])));
    x=(c[i]-(b[i]*y))/a[i];
    printf("%.3f %.3f\n",x,y);
  }
  return 0;
}