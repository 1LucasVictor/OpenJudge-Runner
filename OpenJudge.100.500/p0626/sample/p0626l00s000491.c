#include <stdio.h>

int main() {
  long long int times, number_n;
  scanf("%lld %lld", &times, &number_n);
  if(times == 0) {
    printf("%lld\n", number_n);
  } else if(times == 1) {
    printf("%lld\n", number_n * 100);
  } else {
    printf("%lld\n", number_n * 10000);
  }
  return 0;
}
