#include<stdio.h>
int main(void){
  int b,c,a;
   scanf("%d",&a);

  b=a/3600;
  c=(a-b*3600)/60;
  a=a%60;
  printf("%d:%d:%d\n",b,c,a);

  
  return 0;
}