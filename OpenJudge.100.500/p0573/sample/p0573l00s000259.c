#include<stdio.h>
int main() {
  char str[4];
  char a;
  int f = 0;
  scanf("%s", str);
  for (int i = 0; i < 4; i++) {
    a = str[i];
    for (int j = 0; j < 4; j++) {
      if (a == str[j]) {
        f++;
      }
    }
  }
  if (f >= 8) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }
  return 0;
}
