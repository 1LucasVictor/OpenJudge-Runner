#include <stdio.h>

#define rep(i, n) for (int i = 0; i < n; i = i + 1)
#define MAX 10010
#define MAX_INT 9223372036854775807

int main() {
  int N, M, K;

  scanf("%d%d%d", &N, &M, &K);

  int A[N], B[M];

  rep(i, N) {
    scanf("%d", A + i);
  }

  rep(i, M) {
    scanf("%d", B + i);
  }

  int ans_count = 0;
  int a_i = 0;
  int b_i = 0;

  while(K > 0) {
    if (a_i + 1 > N) {
      if (b_i + 1 > M) {
        break;
      } else {
        if (B[b_i] <= K) {
          K -= B[b_i];
          ans_count += 1;
          b_i += 1;
        }
      }
    }

    if (b_i + 1 > M) {
      if (a_i + 1 > N) {
        break;
      } else {
        if (A[a_i] <= K) {
          K -= A[a_i];
          ans_count += 1;
          a_i += 1;
        }
      }
    }

    if (A[a_i] <= B[b_i]) {
      if (A[a_i] <= K) {
        K -= A[a_i];
        ans_count += 1;
        a_i += 1;
      } else {
        break;
      }
    } else {
      if (B[b_i] <= K) {
        K -= B[b_i];
        ans_count += 1;
        b_i += 1;
      } else {
        break;
      }
    }
  }

  printf("%d\n", ans_count);

  return 0;
}
