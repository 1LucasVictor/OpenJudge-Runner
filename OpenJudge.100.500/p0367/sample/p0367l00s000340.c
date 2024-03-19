#include <stdio.h>

int main(void) {
  int a = 0;
  int b = 0;
  int c = 0;

  int i = 0;
  int count = 0;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);  

  for (i = a; i <= b; i++) {
    if ((c % i) == 0) {
      count++;
    }
  }

  printf("%d\n", count);
  
  return 0;
}