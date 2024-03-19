#include <stdio.h>

int main() {
  int i, a;
  int f[45];

  
  f[0] = f[1] = 1;
  for(i = 2; i < 45; ++i) {
    f[i] = f[i-1] + f[i-2];
  }
  
  scanf("%d", &a);
  printf("%d\n", f[a]);

  
  return 0;
}

