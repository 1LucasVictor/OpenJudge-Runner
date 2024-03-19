#include <stdio.h>

int main(void){
  int A, B, T, n;
  scanf("%d %d %d", &A, &B, &T);
  n = 0;
  while(n * A < T + 0.5) n++;
  printf("%d\n", (n - 1) * B);
  return 0;
}
