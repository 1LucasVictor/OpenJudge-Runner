#include<stdio.h>

int main()
{
  int n, k, w[100000];
  int i;
  int sum = 0;
  int max = 0;

  scanf("%d %d", &n, &k);
  for (i = 0; i < n; i++) {
    scanf("%d", &w[i]);
    sum += w[i];
    if ( w[i] > max )
      max = w[i];
  }

  int low = sum / k + ((sum%k) ? 1 : 0);
  if (max > low)
    low = max;

  int P = low;
  int tmp = 0;
  int tmpk = 0;
  int j;
  for (i = 0 ;; P++) {
    tmpk = 0;
    while (1) {
      for (; P >= tmp + w[i] && i != n; i++) {
	tmp += w[i];
      }
      tmp = 0;
      tmpk++;
      if (tmpk > k)
	break;
      if (i == n) {
	printf("%d\n", P);
	return 0;
      }
    }
  }
  return 0;
}