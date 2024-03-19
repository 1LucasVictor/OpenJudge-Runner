#include <stdio.h>

int main()
{
	int i, n;
  int count;

  while (scanf("%d", &n) != EOF) {
    count = 0;
		while (n > 1) {
      for (i = 2; i < n; i++) {
        if (n % i == 0) {
          break;
        }
      }
      if (i == n) {
        count++;
      }
      n--;
    }
    printf("%d\n", count);
  }

  return 0;
}