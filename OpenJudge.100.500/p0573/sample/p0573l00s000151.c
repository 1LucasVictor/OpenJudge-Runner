#include <stdio.h>

int main() {
  char str[5];
  int i, a = 0, b = 0;
  char ca = 0, cb = 0;
  scanf("%s", str);
  for (i = 0; i < 4; i++) {
    if (str[i] == ca) {
      a++;
    } else if (str[i] == cb) {
      b++;
    } else if (ca == 0) {
      ca = str[i];
      a++;
    } else if (cb == 0) {
      cb = str[i];
      b++;
    } else {
      printf("No\n");
      return 0;
    }
  }
  if (a == 2 && b == 2) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
