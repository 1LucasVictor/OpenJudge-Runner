#include <stdio.h>
#include <stdlib.h>

int n, k, w[100005];

int is_ok(int x) {
  int i, group_cnt = 1;
  int sum = 0;
  for (i = 0; i < n; i++) {
    if (w[i] > x) { return 0; }
    if (sum + w[i] <= x) {
      sum += w[i];
    } else {
      sum = w[i];
      group_cnt++;
    }
  }
  return group_cnt <= k ? 1 : 0;
}

int main() {
  int i;
  scanf("%d %d", &n, &k);

  for (i = 0; i < n; i++) {
    scanf("%d", &w[i]);
  }

  int ng = -1;       // 解が存在しない値
  int ok = 1e9+9;    // 解が存在する値

  while (abs(ok-ng) > 1) {
    int mid = (ng+ok) / 2;

    // mid が条件を満たすとき
    if (is_ok(mid)) {
      ok = mid;
    } else { // mid が条件を満たさないとき
      ng = mid;
    }
  }
  
  printf("%d\n", ok);

  return 0;
}
