#include <stdio.h>

int main()
{
  int n, i, mny = 100000;

  scanf("%d", &n);
  for (i = 0; i < n; i++){
    mny *= 1.05;
    if (mny % 1000 != 0) {
      mny += 1000 - (mny % 1000);
    }
  }
  printf("%d\n", mny);

  return 0;
}