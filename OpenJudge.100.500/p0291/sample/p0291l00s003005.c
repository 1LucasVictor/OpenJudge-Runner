#include <stdio.h>
int main(){
  int n,i,j;
  int minv=0,maxv=0;
  scanf("%d",&n);
  int kawase[n];
  for(i=0;i<n;i++){
    scanf("%d",&kawase[i]);
  }
  minv=kawase[0];
  for(j=1;j<n-1;j++){
    if(maxv<kawase[j]-minv)maxv=kawase[j]-minv;
    if(minv>kawase[j])minv=kawase[j];
  }
  printf("%d\n",maxv);
  return 0;
}