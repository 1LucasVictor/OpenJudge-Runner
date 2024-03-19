#include <stdio.h>
#include <stdlib.h>
#define FALSE 0
#define TRUE 1

int main (int argc, char* argv[])
{
  int i, p, k, count, n;
  char flag[1000000];
  
  while (scanf("%d", &n) != EOF) {
    count = 1;
    for (i=0; i<=n; i++) {
      flag[i] = TRUE;
    }
    for (i=0; i<=n; i++) {
      if (flag[i]) {
	p = i + i + 3;
	for (k=i+p; k<=n; k+=p) {
	  flag[k] = FALSE;
	}
	if (p <= n) {
	  count++;
	}
      }
    }
    printf("%d\n", count);
  }
  
  return 0;
}