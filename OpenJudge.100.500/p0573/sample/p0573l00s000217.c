#include <stdio.h>

int main() {
  char str[4];
  scanf("%s", str);
  if (str[0] == str[1]) {
    if (str[2] == str[3]) {
      if (str[0] != str[2]) {
        printf("Yes\n");
        return 0;
      }
    }
  } else if (str[0] == str[2]) {
    if (str[1] == str[3]) {
      if (str[0] != str[1]) {
        printf("Yes\n");
        return 0;
      }
    }
  } else {
    if (str[1] == str[2]) {
      if (str[0] != str[1]) {
        printf("Yes\n");
        return 0;
      }
    }
  }
  printf("No\n");
  return 0;
}
