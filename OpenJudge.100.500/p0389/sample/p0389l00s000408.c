#include <stdio.h>
#include <string.h>

int main() {
  char a[201], b[201];
  int n, m, i, j, l;

  while(1) {
    scanf("%s", a);
    if (strcmp(a, "-") == 0)  break;
    l = strlen(a);
    scanf("%d", &m);
    for (i = 0; i < m; i++) {
      scanf("%d", &n);
      for (j = 0; j < l - n; j++) {
        b[j] = a[j + n];
      }
      for (j = 0; j < n; j++) {
        b[l - n + j] = a[j];
      }
      b[l] = '\0';
      strcpy(a, b);
    }
    printf("%s\n", a);
  }

  return 0;
}

