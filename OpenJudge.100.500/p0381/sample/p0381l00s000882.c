#include <stdio.h>

int main(void) {
  for ( ; ; ) {
    int n, x;
    scanf("%d %d", &n, &x);

    if (n==0 && x==0) return 0;

    int cnt=0;
    for (int i=1; i<=n-2; i++) {
      for (int j=i+1; j<=n-1; j++) {
        for (int k=j+1; k<=n; k++) {
          if (i+j+k==x) cnt++;
        }
      }
    }
    printf("%d\n", cnt);
  }
  return 0;
}
