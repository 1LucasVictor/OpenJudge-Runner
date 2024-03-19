#include <stdio.h>

int main(void) {
  
  int i = 1, x, n, k;
  scanf("%d", &n);
  for(k = 1; k <= n; k++) {
    if(k % 10 == 3 || k % 3 == 0 || k / 10 == 3) {
      printf(" %d",k); 
    }  else {
    }
  }
  printf("\n");
  return 0;
}