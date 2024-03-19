#include <stdio.h>

int main(){
  int a,b,t;
  if(scanf("%d",&a)==1 && scanf("%d",&b)==1 && scanf("%d",&t)==1){}
  int result = (t/a)*b;
  printf("%d",result);
  return 0;
}