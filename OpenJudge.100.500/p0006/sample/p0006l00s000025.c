#include<stdio.h>
main(){
  int a=100000,n,i;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    a=a+a*0.05;
    if(a%1000!=0){
      a=a/1000;
      a=a+1;
      a=a*1000;
    }
  }
  printf("%d\n",a);
  return 0;
}