#include<stdio.h>

int main(){
  unsigned long long a;
  double b;
  scanf("%llu %lf",&a,&b);

  b = b * 1000;
  unsigned long long b_int = b;
  printf("%llu\n", a*b_int/1000);
}
