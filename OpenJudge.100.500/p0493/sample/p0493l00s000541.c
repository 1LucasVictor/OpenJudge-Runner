#include<stdio.h>

int main(void){
int x,y,z,m,n;
  scanf("%d", &x);
  y=x/500; //500円の枚数
   z = y*1000;
  x=x%500;
  m=x/5;
  n=m*5;
  n=n+z;
  printf("%d\n", n);
  return 0;
}