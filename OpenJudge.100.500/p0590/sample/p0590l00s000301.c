#include <stdio.h>

int main() {
  int a=0, e=0, k=0;
  scanf("%d\n%*d\n%*d\n%*d\n%d\n%d", &a, &e, &k);
  if (e-a > k) printf(":(\n");
  else printf("Yay!\n");
  return 0;
}
