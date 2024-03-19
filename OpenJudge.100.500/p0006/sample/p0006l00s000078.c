#include<stdio.h>
main(){
  int n,i=0,sya=100000;
  scanf("%d",&n);
  while(i<n){
    sya*=1.05;
    if(sya%1000!=0){
      sya=sya-(sya%1000)+1000;
    }
    i++;
  }
  printf("%d\n",sya);
  return 0;
}