#include<stdio.h>
int main (void){
  int a,b,x=0;
  scanf("%d%d",&a,&b);
  if(0<a<10&&0<b<10){
    x=a*b;
  }else{
    x=-1;
  }
printf("%d\n",x);
}