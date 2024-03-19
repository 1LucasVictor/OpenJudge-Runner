#include<stdio.h>

int main(){
  int a,b;
  scanf("%d", &a);
  scanf("%d", &b);

  if(a<=8 && b<=8)puts("Yay!");
  else puts(":(");
  return 0;
}