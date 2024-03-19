#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void) {
  long long int n;
  scanf("%lld", &n);
  long long int num[n];

  for (long long int i = 0; i < n; i++) num[i] = 0;

  for (long long int i = 0; i < n - 1; i++) {
    long long int person;
    scanf(" %lld", &person);
    num[person - 1]++;
  }

  for (long long int i = 0; i < n; i++) printf("%lld\n", num[i]);

  return 0;
}
