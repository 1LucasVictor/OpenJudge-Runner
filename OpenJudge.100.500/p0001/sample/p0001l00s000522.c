#include <stdio.h>
int main(void){
  int sum[1000],a[1000],b[1000],i,n,count[1000];
  i=0;
  while(scanf("%d %d",&a[i],&b[i])!=EOF){    
    sum[i]=a[i]+b[i];
    i++;
  }
  for(n=0;n<i;n++){
    count[n]=0;
    while(sum[n]>0){
      count[n]++;
      sum[n]=sum[n]/10;
    }
  }
  for(n=0;n<i;n++){
    printf("%d\n",count[n]);
  }
  return(0);
}