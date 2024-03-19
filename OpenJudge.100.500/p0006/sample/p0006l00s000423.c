#include<stdio.h>
int main(){
  int n,i,r=100000;
  scanf("%d",&n);
  if(n<=100){
  for(i=0;i<n;i++){
    r=r*1.05;
  if(r%1000>=1 && r%100<=999){
    r=r+(1000-r%1000);
  }
  }
  printf("%d\n",r);
  }
  return 0;
}