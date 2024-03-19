#include <stdio.h>

int main(void) {
  
  int a, b, c, d, e, k;
  scanf("%d\n%d\n%d\n%d\n%d\n%d\n", &a, &b, &c, &d, &e, &k);
  
  (e - a > k || d - a > k || c - a > k || b - a > k)  ? puts(":(") : puts("Yay!");
  
  return 0; 
  
}