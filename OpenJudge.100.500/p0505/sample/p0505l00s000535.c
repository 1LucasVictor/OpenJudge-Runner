#include <stdio.h>

int main(int argc, char const *argv[]) {

  int H, N;
  int A[10000];
  int sum = 0;
  scanf("%d %d", &H, &N);

  for (int i = 0; i < N; i++) {
    scanf("%d", (A + i));
    sum += A[i];
    if (sum >= H) {
      printf("Yes\n");
      return 0;
    }
  }

  printf("No\n");

  return 0;
}
