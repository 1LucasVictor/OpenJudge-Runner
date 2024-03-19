#include <stdio.h>

int main(void)
{
  int n;
  int count;
  int i, j, k;

  while (scanf("%d", &n) != EOF) {
    count = 0;

    if (n < 2) {
      ;
    } else if (n >= 2) {
      count++; // 2 is Prime Number.

      for (i = 3; i <= n; i += 2) {
	k = 0;
	for (j = 3; (j*j) <= i; j += 2) {
	  if ((i % j) == 0) {
	    k = 1;
	    break;
	  }
	}
	if (k == 0) count++;
      }
    } else {
      puts("ERROR!");
    }

    printf("%d\n", count);
  }

  return 0;
}