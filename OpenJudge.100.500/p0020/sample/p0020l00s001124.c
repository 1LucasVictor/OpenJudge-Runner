#include<stdio.h>
int main(){
  int i,j;
  int n;
  scanf("%d",&n);
  double x[4][n],y[4][n];
  for(i=0;i<n;i++){
    for(j=0;j<4;j++){
      scanf("%lf%lf",&x[j][i],&y[j][i]);
    }
  }
  for(i=0;i<n;i++){
    if((x[1][i]-x[0][i])*(y[3][i]-y[2][i])==(y[1][i]-y[0][i])*(x[3][i]-x[2][i])){
      puts("YES");
    }else{
      puts("NO");
    }
  }
  return 0;
}