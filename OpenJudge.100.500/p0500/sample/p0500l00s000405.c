#include <stdio.h>

int main(void)
{
  int N;
  int M;
  int S[5];
  int C[5];
  int arr[3] = {0};
  int result;

  // input
  scanf("%d %d", &N, &M);
  for (int i = 0; i < M; i++) {
    scanf("%d %d", &S[i], &C[i]);
  }

  // check
  for (int i = 0; i < M; i++) {
    for (int j = 0; j < M; j++) {
      if (S[i] == S[j]) {
        if (C[i] != C[j]) {
          printf("%d\n", -1);
          return 0;
        }
      }
    }
  }

  // put array
  for (int i = 0; i < M; i++) {
    arr[S[i] - 1] = C[i];
  }

  // output
  result = 0;
  if (N == 1) {
    result = arr[0];
  }
  if (N == 2) {
    result = arr[0] * 10 + arr[1];
    if (result < 10) {
      result = -1;
    }
  }
  if (N == 3) {
    result = arr[0] * 100 + arr[1] * 10 + arr[2];
    if (result < 100) {
      result = -1;
    }
  }
  printf("%d\n", result);

  return 0;
}