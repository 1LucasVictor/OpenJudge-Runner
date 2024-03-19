// SPDX-License-Identifier: X11
// 2020-06-27 (Live)

#include <stdio.h>

int main(void) {
  long N,M,K;
  scanf("%ld %ld %ld", &N, &M, &K);

  long A[N];
  for (long i = 0; i < N; i++)
    scanf("%ld", &A[i]);

  long B[M];
  for (long i = 0; i < M; i++)
    scanf("%ld", &B[i]);

  long n = 0,
       a = 0,
       b = 0;
  while(K > 0) {
    if ((a >= N && K < B[b]) ||
        (b >= M && K < A[a]) ||
        (K < A[a] && K < B[b]))
      break;

    if (b >= M || A[a] < B[b]) {
      K -= A[a];
      a++;
    }
    else {
      K -= B[b];
      b++;
    }

    n++;
  }

  printf("%ld\n", n);
}
