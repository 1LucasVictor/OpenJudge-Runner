#include<stdio.h>
int main(){
  int x,a=0,tmp;
  scanf("%d",&x);
    tmp=x/500;
    a+=tmp*1000;
    x-=tmp*500;
    tmp=x/5;
    a+=tmp*5;
  printf("%d",a);
}