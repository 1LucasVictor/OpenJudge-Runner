#include <stdio.h>

int main(void) {
  int n, m, list[3] = {10, 10, 10};
  scanf("%d %d", &n, &m);

  for (int i = 0; i < m; i++) {
    int s, c;
    scanf("%d %d", &s, &c);
    if ((list[s-1] == c) || (list[s-1] == 10)) {
      list[s-1] = c;
    } else {
      printf("-1");
      return 0;
    }
  }
  int keta;
  if ((list[0] <= 9) && (list[0] > 0)) {
    keta = 3;
  } else if ((list[1] <= 9) && (list[1] > 0)) {
    keta = 2;
  } else
    keta = 1;
  if (n == keta) {
    for (int i = 3 - n; i < 3; i++) {
      if(list[i] == 10) list[i] = 0;
      printf("%d", list[i]);
    }
    printf("\n");
  } else printf("-1");
}