#include <stdio.h>
 
int main() {
  int a, b;
  int result = scanf("%d %d", &a, &b);
  
  if (result) {
    if (b % a == 0) {
      // aはbの約数
      printf("%d", a+b);
    } else {
      printf("%d", b-a);  
    }
  }
  
  return 0;
}