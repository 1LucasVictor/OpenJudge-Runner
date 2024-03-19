#include <stdio.h>

#define MAX(A, B) ((A) < (B) ? (B) : (A))
#define MIN(A, B) ((A) < (B) ? (A) : (B))
#define MAXNUM 10001

int main(void) {
  int n, a[MAXNUM], i, max, min;
  long sum;
  scanf ("%d", &n);
  for (i = 0; i < n ; i++) {
  scanf ("%d", &a[i]);
  }
  max = a[0];
  min = a[0];
  sum = a[0];
  //  printf ("%d %d %d\n", min, max, sum);
  for (i = 1; i < n ; i++) {
    max = MAX (max, a[i]);
    min = MIN (min, a[i]);
    sum = sum + a[i];
    // printf ("%d %d %d\n", min, max, sum);
  }
  printf ("%d %d %d\n", min, max, sum);
  return 0;
}

