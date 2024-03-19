#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
  char s[1001];
  int i;
  int len;

  while (1) {
    int sum = 0;
    scanf("%s", s);
    len = strlen(s);
    if (s[0] == '0') {
      break;
    } else {
      for (i = 0; i < len; i++) {
        sum += s[i] - '0';
      }
    }
    printf("%d\n", sum);
  }

  return 0;
}

