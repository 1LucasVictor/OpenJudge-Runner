#include <stdio.h>

int main() {
  long long int times, number_n, temp = 0;
  scanf("%lld %lld", &times, &number_n);
  if(number_n == 100) {
    temp = 1;
  }
  if(times == 0) {
    printf("%lld\n", temp + number_n);
  } else if(times == 1) {
    printf("%lld\n", (temp + number_n) * 100);
  } else if(times == 2) {
    printf("%lld\n", (temp + number_n) * 10000);
  }
  return 0;
}
