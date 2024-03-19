#include <stdio.h>

int main(void){
  double x, a, b;

  scanf("%lf %lf %lf", &x, &a, &b);

  if(a>=b)
  puts("delicious");
  else if(b-a<=x)
  puts("safe");
  else
  puts("dangerous");

  return 0;
}
