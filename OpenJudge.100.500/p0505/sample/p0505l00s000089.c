#include <stdio.h>
#include <stdlib.h>

int main() {
  int h, n, a;
  char buf[1024];
  fgets(buf, sizeof(buf), stdin);
  sscanf(buf, "%d %d\n", &h, &n);

  int tmp;
  for (tmp=0; tmp<n; tmp++) {
    scanf("%d", &a);
    h -= a;
  }

  if (h > 0) printf("No\n");
  else printf("Yes\n");

  return 0;
}
