#include <stdio.h>
#define N 200000
int main(){

  int i,j,n,a[N],min,max;
  scanf("%d",&n);

  for(i=0;i<n;i++) scanf("%d",&a[i]);
  max=a[1]-a[0];
  min=a[0];
  for(j=1;j<n-1;j++){
    if(max<a[j]-min) max=a[j]-min;
    if(a[j]<min) min=a[j];
  }
  printf("%d\n",max);
  return 0;

}