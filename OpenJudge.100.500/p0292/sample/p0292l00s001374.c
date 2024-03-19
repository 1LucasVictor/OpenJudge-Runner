#include <stdio.h>

int main(void) {
  int i, temp;
  int N, A[100];
  int flag = 1, t = 0;

  scanf ("%d", &N);
  for (i = 0 ; i < N ; i++) {
    if (i > 0)
      putchar (' ');
    scanf ("%d", &A[i]);
  }

  while (flag) {
    flag = 0;
    for (i = N-1 ; i >= 1 ; i--) {
      if (A[i] < A[i-1]) {
        temp = A[i];
        A[i] = A[i-1];
        A[i-1] = temp;
        flag = 1;
        t++;
      }
    }
  }

  for (i = 0 ; i < N ; i++) {
    if (i > 0)
      putchar (' ');
    printf ("%d", A[i]);
  }

  putchar ('\n');

  printf ("%d\n", t);

  return 0;
}