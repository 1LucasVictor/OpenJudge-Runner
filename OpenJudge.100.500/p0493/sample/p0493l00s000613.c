#include <stdio.h>

int main(void){

  int x, c_1, c_2, sum;
  scanf("%d", &x);
  c_1=x/500;
  c_2=(x-500*c_1)/5;
  sum=1000*c_1+5*c_2;
  printf("%d", sum);

  return 0;
}
