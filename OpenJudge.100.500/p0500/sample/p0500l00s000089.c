#include <stdio.h>

int main(void) {
  int result[3] = {0, 0, 0};
  int N, M;
  int s[6];
  int c[6];
  int i;

  scanf("%d%d", &N, &M);

  for (i=0; i<M; i++) {
    scanf("%d%d", &s[i], &c[i]);
  }

  // 左から1桁目が存在するか
  for (i=0; i<M; i++) {
    if (s[i] == 1) break;
    goto error;
  }
  // set
  for (i=0; i<M; i++) {
    if (result[s[i] - 1] == 0) {
      result[s[i] - 1] = c[i];
    }
    else {
      if (result[s[i] - 1] < c[i]) {
        result[s[i] - 1] = c[i];
      }
    }
  }
  // 上位桁が0の場合
  if (N == 3) {
    if (result[0] == 0) goto error;
  }
  else if (N == 2) {
    if (result[0] != 0) goto error;
    if (result[1] == 0) goto error;
  }
  else if (N == 1) {
    if (result[0] != 0) goto error;
    if (result[1] != 0) goto error;
  }

  for (i=0; i<3; i++) {
    printf("%d", result[i]);
  }
  printf("\n");
  return (0);

  error:
    printf("-1\n");
  return (0);
}
