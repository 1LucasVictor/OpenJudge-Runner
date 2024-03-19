#include<stdio.h>
#define LEN 20001
int main() {
  char s[LEN], t[LEN];
  int i, count = 0;
  scanf("%s %s", &s, &t);
  for (i = 0; i < LEN && s[i]; i++) {
    if (s[i] != t[i]) {
      count++;
    }
  }
  printf("%d\n", count);
  return 0;
}