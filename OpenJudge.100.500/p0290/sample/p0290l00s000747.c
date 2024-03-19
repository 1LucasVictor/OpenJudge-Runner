#include <stdio.h>

int prime[10005];

void f(void) {
  int i, j;
  for (i = 2; i <= 100; i++) {
    for (j = i + 1; j < 10005; j++) {
      if (j % i == 0) {
        prime[j] = 1;
      }
    }
  }
}

void solve(void) {
  int N;
  int cnt = 0;
  int i;

  scanf("%d", &N);

  for (i = 0; i < N; i++) {
    int x;
    scanf("%d", &x);

    if (!prime[x]) {
      cnt++;
    }
  }

  printf("%d\n", cnt);
}

int main(void) {
  f();
  solve();

  return 0;
}