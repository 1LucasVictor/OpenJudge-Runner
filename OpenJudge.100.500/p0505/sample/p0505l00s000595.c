#include <stdio.h>

int main(void){

  long h,n;
  scanf("%ld %ld", &h, &n);
  long a[n];
  for (long i = 0; i < n; i++) {
    scanf("%ld", &a[i]);
  }
  long attack = 0;
  for (long i = 0; i < n; i++) {
    attack += a[i];
  }

  if (attack >= h) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}