#include<stdio.h>
int main(){
  int n,i,r=100000;
  scanf("%d",&n);
  for(i=0;i<n;i++){
    r=r*1.05;
  }
  if(r%1000>=1 && r%1000<=999){
    r=r+10000-r%10000;
  }
  printf("%d\n",r);
  return 0;
}