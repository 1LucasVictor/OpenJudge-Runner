#include <stdio.h>
int main(){
  int n,i,j;
  double x[4],y[4];
  double vxab,vyab,vxcd,vycd;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    for(j=0;j<4;j++){
      scanf("%lf %lf",&x[j],&y[j]);
    }
    vxab=x[1]-x[0];
    vyab=y[1]-y[0];
    vxcd=x[3]-x[2];
    vycd=y[3]-y[2];
    if((vxab*vycd-vyab*vxcd)==0){
      printf("YES\n");
    }else{
      printf("NO\n");
    }
  }
  return 0;
}