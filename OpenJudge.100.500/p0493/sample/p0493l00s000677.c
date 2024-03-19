#include <stdio.h>

int main(void){
  int a;
  int b = 0;
  scanf("%d",&a);
  b = (a / 500)*1000;
  a = a % 500;
  b += (a / 5) * 5;
  printf("%d\n",b);

}
