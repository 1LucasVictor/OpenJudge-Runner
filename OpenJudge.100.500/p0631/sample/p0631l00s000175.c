#include <stdio.h>

int main(void) {
  int a;
  int b;
  int x;
  int needs;
  scanf("%d %d %d", &a, &b, &x);
  needs = x - a;
  if (needs > b || needs < 0) printf("NO\n");
  else printf("YES\n");
  return 0;
}

