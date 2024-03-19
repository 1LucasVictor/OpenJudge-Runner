#include<stdio.h>

int main(void) {
  long long n, k;
  scanf("%d %d", &n, &k);
  long long a = n % k;
  if(a > k/2) {
    if(k-a>0) {
      printf("%d\n", k-a);
    }
    else {
      printf("%d\n", a-k);
    }
  }
  else {
    printf("%d\n", a);
  }
  return 0;
}
