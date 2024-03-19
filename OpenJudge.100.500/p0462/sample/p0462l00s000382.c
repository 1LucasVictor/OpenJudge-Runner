#include <stdio.h>
int main(){
  long int a;
  double b;
  scanf("%ld %lf", &a, &b);
  long int ans = a*b;
  printf("%ld", ans);  
  return 0;
}