#include <stdio.h>

int main(void) {

  int A, B, T;
  scanf("%d",&A);
  scanf("%d",&B);
  scanf("%d",&T); 
  
  int ans = (T / A) * B;

  printf("%d\n", ans);
  return 0;
}
