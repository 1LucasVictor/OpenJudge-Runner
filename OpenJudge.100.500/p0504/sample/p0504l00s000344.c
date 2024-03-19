#include<stdio.h>
int main(){

  int h, a, n;
  scanf("%d %d",&h, &a);
  printf("%d\n", (h-h%a)/a+1);
  return 0;
}