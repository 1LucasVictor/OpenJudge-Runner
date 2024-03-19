#include<stdio.h>
int main(void){
  int n,a[10000],i,min=1000000,max=-1000000,sum=0;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    scanf("%d",&a[i]);
    sum += a[i];
    if(a[i]>max)max = a[i];
    if(a[i]<min)min = a[i];
  }
  printf("%d %d %d\n",min,max,sum);
  return(0);
}