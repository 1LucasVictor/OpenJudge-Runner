#include<stdio.h>
#include<math.h>
int main(){
  long a;
  double b;
  scanf("%ld %lf", &a, &b);
  printf("%ld", (long)floor((double)a * (double)b));
  return 0;
}