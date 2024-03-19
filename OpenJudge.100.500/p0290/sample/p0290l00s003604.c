#include <stdio.h>
#include <math.h>

int prime_number(int num) {
  if (num == 2)
    return 1;
  else if ((num % 2 == 0) || num == 1)
    return 0;
  else {
    for (int i = 3; i <= sqrt(num); i++) {
      if (num % i == 0)
	return 0;
    }
  }
  return 1;
}

int main(void) {
  int n;
  int i;
  int num;
  int count = 0;
  
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    scanf("%d", &num);
    count += prime_number(num);
  }

  printf("%d\n", count);
  
  return 0;
}

