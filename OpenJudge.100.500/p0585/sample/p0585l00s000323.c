#include<stdio.h>
int main(void){
  int a,b,c,d;
  scanf("%d %d %d",&a,&b,&c);
  d=(c+0.5)/a;
  printf("%d\n",d*b);
  return 0;
}