#include<stdio.h>
main(){
  int n,i,x,xx;
  double sum=100000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    sum=sum*1.05;
    x=sum/1000;
    x=x*1000;
    //   y=sum-x;
    if(sum-x > 0){
      x=x+1000;
    }
  sum=x;
  }
  printf("%d\n",x);
  return 0;
}