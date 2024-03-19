#include <stdio.h>
#define DEBT 100000

int main()
{
  int n, i, mny = DEBT, intrst = DEBT * 0.05;

  scanf("%d", &n);
  for (i = 0; i < n; i++){
    mny += intrst;
  }
  if (mny % 10000 > 0) {
    mny = mny - (mny % 10000) + 10000;
  }
  printf("%d\n", mny);

  return 0;
}