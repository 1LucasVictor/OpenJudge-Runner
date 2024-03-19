#include <stdio.h>

int main() {
  int a, b, c, d, n;
  while(scanf("%d", &n) != EOF) {
    int acc = 0;
    for(a = 9; a >= 0; a--)
      for(b = 9; b >= 0; b--)
        for(c = 9; c >= 0; c--)
          for(d = 9; d >= 0; d--)
            if ((a + b + c + d) == n)
              acc++;
    printf("%d\n", acc);
  }
}