#include <stdio.h>

int main() {
  int a[100], i, n;

  scanf("%d", &n);
  for(i=0;i<n;i++) scanf("%d", &a[i]);
  if (n>=1) printf("%d", a[n-1]);
  for(i=n-2;i>=0;i--) printf(" %d", a[i]);
  printf("\n");
  return 0;
}
