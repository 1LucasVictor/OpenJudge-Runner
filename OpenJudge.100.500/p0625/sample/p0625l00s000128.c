#include<stdio.h>
int main(void){
  int a,b;
  scanf("%d%d",&a,&b);
  puts((a<=8)*(b<=8)?"Yay!":":(");
  return 0;
}