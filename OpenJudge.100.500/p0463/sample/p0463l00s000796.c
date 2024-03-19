#include <stdio.h>

int main() {
  int i, n; //n <= 999
  scanf("%d", &n);
  
  for(i = 0; n > 9; i++) {
   n /= 10;
  }
  n %= 10;
  
  if (n == 2 || n == 4 || n == 5 || n == 7 || n == 9)
    printf("hon");
  else if (n == 0 || n == 1 || n == 6 || n == 8)
    printf("pon");
  else
    printf("bon");
  
  return(0);
}