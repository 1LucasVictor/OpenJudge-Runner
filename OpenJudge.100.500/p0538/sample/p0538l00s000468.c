#include<stdio.h>
int main (void){
  int a,b,x=0;
  scanf("%d%d",&a,&b);
  if(1<=a&&a<=9&&1<=b&&b<=9){
    x=a*b;
  }else{
    x=-1;
  }
printf("%d\n",x);
}
