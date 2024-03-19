#include <stdio.h>
int main() {
  char s[1001];
  while (1) {
    scanf("%s", s);
    if (s[0] == '0') {
      break;
    }
    int sum = 0;
    for (int i = 0; s[i] != '\0'; i++) {
      sum += s[i] - '0';
    }
    printf("%d\n", sum);
  }
  return 0;
}
