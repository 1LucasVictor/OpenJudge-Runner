#include <stdio.h>

int main(void) {
  int H;
  int N;

  scanf("%d", &H);
  scanf("%d", &N);
  int A[N];
  int sum = 0;
  for (int i = 0; i < N; i++) {
    scanf("%d", &A[i]);
    sum += A[i];
  }
  if (sum >= H) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
