#include<stdio.h>
#include<math.h>
int main(){
  double a, b;
  scanf("%lf %lf", &a, &b);
  printf("%ld", (long)floor((double)a * (double)b));
  return 0;
}