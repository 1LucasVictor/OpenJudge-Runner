#include <stdio.h>
#define DEBT 100000

int main()
{
  int n, i, mny = DEBT;

  scanf("%d", &n);
  for (i = 0; i < n; i++){
    mny *= 1.05;
  }
  if (mny % 10000 > 0) {
    mny = mny - (mny % 10000) + 10000;
  }
  printf("%d\n", mny);

  return 0;
}