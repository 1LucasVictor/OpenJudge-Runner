#include <stdio.h>

int Cal_GCD(int, int);

int main(void) 
{
  int m, n, GCD, LCM;

  while (scanf("%d %d", &m, &n) != EOF) {
    GCD = Cal_GCD(m, n);
    LCM = (m / GCD) * n;
    printf("%d %d\n", GCD, LCM);
  }

  return 0;
}

/* ユークリッドの互除法 */
int 
Cal_GCD(int m, int n) {

  int temp;

  if (m < n) {
    temp = m;
    m    = n;
    n    = temp;
  }

  while (n != 0) {
    temp = n;
    n    = m % n;
    m    = temp;
  }

  return m;
}