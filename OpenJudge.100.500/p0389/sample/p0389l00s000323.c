#include <stdio.h>
#include <string.h>

main() {
  char moji[201];
  char str[201];
  int i,m, n;

  while (1) {
    scanf("%s", moji);
    if (strcmp(moji, "-") == 0) break;
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
      scanf("%d", &n);
      strcpy(str, &moji[n]);
      strncat(str, moji, n);
      strcpy(moji, str);
    }
    printf("%s\n", moji);
  }
  return 0;
}