#include <stdio.h>


int main(void){
  unsigned long a = 0;
  double b = 0;
  
  scanf("%lu %lf\n", &a, &b);

  // a = a_1 * 100 + a_2
  unsigned long a_1 = a / 100;
  unsigned long a_2 = a % 100;
  
  unsigned long result = a_1 * ((unsigned long)(b * 100)) + ((unsigned long)(a_2 * b));
  
  printf("%lu\n", result);
  
  return 0;
}