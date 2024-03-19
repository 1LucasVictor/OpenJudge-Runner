#include<stdio.h>
#include<stdlib.h>
int main(){
  int a[200000],i,j,n,min,max1,max2;
  scanf("%d",&n);
  for(i=0;i<n;i++) scanf("%d",&a[i]);
  max1 = a[1] - a[0];
  if(i==2) {printf("%d\n",max1);exit(0);}
  min = a[0];
  for(i=2;i<=n;i++){
    max2 = a[i];
    for(j=0;j<i;j++)
      if(min>a[j]) min = a[j];
    if(max1<max2-min) max1 = max2 - min;
  }
  printf("%d\n",max1);
}
      
