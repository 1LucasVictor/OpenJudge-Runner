#include <stdio.h>

int main(void) 
{
  int a, b, sum, i = 10, digit = 1;

  while (scanf("%d %d", &a, &b) != EOF) {

    sum = a + b;

    while (sum % i != sum) {
      i     *= 10;
      digit += 1;
    }
    
    printf("%d\n", digit);
  }

  return 0;
}