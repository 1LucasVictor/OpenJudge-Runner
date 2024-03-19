#include <stdio.h>

int main(void){
  int a, b, digit, sum;

  while(scanf("%d%d", &a, &b) != EOF){
    sum = a + b;
    digit = 0;
    while(sum != 0){
      digit++;
      sum /= 10;
    }
    printf("%d\n", digit);
  }
  return 0;
}