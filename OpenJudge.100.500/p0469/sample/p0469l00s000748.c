#include <stdio.h>

int main(void) {
  int k, a, b;
  scanf("%d %d %d", &k, &a, &b);
  for(int i = a; i <= b; i++) {
      if(i % k == 0) {
          puts("OK");
          return 0;
      }
  }
  puts("NG");
  return 0;
}