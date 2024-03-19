#include <stdio.h>

int main(void) {
  int n, x;
  int i, j, k;

  while(1) {
    int cnt = 0;
    scanf("%d %d", &n, &x);

    if(n == 0 && x == 0) break;

    for(i=1; i<=n; ++i) {
      for(j=1; j<=n; ++j) {
        if(i == j) continue;
        for(k=1; k<=n; ++k) {
          if(i == k || j == k) continue;
          if(i+j+k == x) cnt++;
        }
      }
    }
    printf("%d\n", cnt/6);
  }

  return 0;
}

