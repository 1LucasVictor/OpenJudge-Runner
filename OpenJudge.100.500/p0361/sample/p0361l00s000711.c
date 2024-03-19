#include<stdio.h>

int main(void){
  int a,b,c,d;
  scanf("%d",&a);
  b = a%60;
  c = ((a-b)%3600)/60;
  d = (a-b-c*60)/3600;
  printf("%d:%d:%d\n",d,c,b);
  return 0;
}

