#include <stdio.h>

int main() {
  int i, count = 0;
  char str[4];
  scanf("%s", str);
  for(i = 0; i < 3; i++) {
    if(str[i] == '1') count++;
  }
  printf("%d\n", count);
  return 0;
}
