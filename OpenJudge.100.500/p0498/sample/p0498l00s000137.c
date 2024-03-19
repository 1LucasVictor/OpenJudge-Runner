#include<stdio.h>
int main() {
  int a, b;
  scanf("%d",&a);
  if(a%2) b = (a/2)+1;
  else b = a/2;
  printf("%d\n",b);
  return 0;
}