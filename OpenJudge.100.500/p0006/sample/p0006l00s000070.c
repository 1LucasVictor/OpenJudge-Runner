#include<stdio.h>
main(){
  int n,i,a=100000,c;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    a=a+a*0.05;
    c=a%1000;
    a=a/1000;
    if(c!=0){
      a++;
    }
    a=a*1000;
  }
  printf("%d\n",a);
  return 0;
}