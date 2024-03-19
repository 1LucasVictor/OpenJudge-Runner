#include <stdio.h>

int main() {

  int A, B, K, count = 0, i;
  scanf("%d %d %d", &A, &B, &K);
  for(i = 1; ; i++) {
    if((A % i == 0) && (B % i == 0)) {
      count++;
    }
    if(count == K) {
      printf("%d\n", i);
      break;
    }
  }
  return 0;
}
