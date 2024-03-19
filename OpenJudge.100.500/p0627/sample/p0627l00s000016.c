#include <stdio.h>

int main(void) {

  int sum, sub, mul;
  int a, b;
  int max;

  scanf("%d", &a);
 scanf("%d", &b);
 //printf("%d%d", a, b);

  sum = a+b;
  //printf("%d", sum);
  sub = a-b;
  //printf("%d", sub);
  mul = a*b;
  //printf("%d", mul);

  if(sum > sub) {
    max = sum;
  }
  else {
    max = sub;
  }

  if(max < mul) {
    max = mul;
  }

  printf("%d", max);

  return 1;

}


