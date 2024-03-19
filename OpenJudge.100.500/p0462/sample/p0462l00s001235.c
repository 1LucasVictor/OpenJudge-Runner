#include <stdio.h>

int main(void){
  long a;
  double b;

  scanf("%ld %lf",&a,&b);

  printf("%ld\n",(long)(a*b));

  return 0;
}
