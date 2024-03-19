#include<stdio.h>
int main(){
  int a,b,i;
  a=100000;
  scanf("%d",&b);
  for(i=0;i<b;i++){
    a*=1.05;
    a+=999;
    a/=1000;
    a*=1000;
  }
  printf("%d\n",a);
  return 0;
}