#include<stdio.h>

int main() {
  int n, t = 0, i;
  int a[1000];
  scanf("%d",&n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  for (i = 0; i < n; i++) {
    if (a[i] % 2 == 0 ) {
      if (a[i] % 3 == 0 || a[i] % 5 == 0) {
        t++;
        break;
      }
    } else {
      continue;
    }
  }
  if (t != 0)
    printf("APPROVED\n");
  else
    printf("DENIED\n");
  return 0;
}
