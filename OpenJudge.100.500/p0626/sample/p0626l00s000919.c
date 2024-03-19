#include <stdio.h>
#include <math.h>

int main(void){
  long long int d, n;
  scanf("%ld%ld", &d, &n);
  long long int ans =  (long long int)pow(100, d) * n;
  printf("%ld\n", ans);
  return 0;
}