#include <stdio.h>
#include <string.h>

int main(void) {

  char s[200001],t[200001];
  scanf("%s", s);
  scanf("%s", t);
  int length = strlen(s);
  int count = 0;
  for (int i = 0; i < length; i++) {
    if (s[i] != t[i]) {
      count++;
    }
  }
  printf("%d\n", count);

  return 0;
}