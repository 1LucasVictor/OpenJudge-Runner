#include <stdio.h>

int main(int argc, char* argv[]) {
  int a, b;
  scanf("%d %d", &a, &b);

  int k = a + b;
  if (k%2==0) printf("%d\n", k/2);
  else printf("IMPOSSIBLE\n");

  return 0;
}
