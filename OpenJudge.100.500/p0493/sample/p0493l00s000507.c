#include<stdio.h>
int main(void){
  int a,b,c,d,x;
  scanf("%d",&a);
  b=a/500;
  b=b*1000;
  c=a%500;
  d=c/5;
  d=d*5;
  x=b+d;
  printf("%d\n",x);
    return 0;
}