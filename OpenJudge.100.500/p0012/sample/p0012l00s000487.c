#include<stdio.h>
int main() {
  int i, n[10];
  for (i = 0; i < 10; i ++) n[i] = 0;
  for (i = 0; scanf("%d", &n[i]) != EOF; i ++) {
    if (!n[i]) {
      i -= 2; printf("%d\n", n[i + 1]); n[i + 1] = 0;
    }
  }
  return 0;
}