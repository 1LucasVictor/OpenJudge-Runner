#include <stdio.h>

long maximumProfit(int *as, int n)
{
  int i, x;
  long tmp;
  long diff = -99999999;
  int min = as[0];
  for (i = 1; i < n; i++) {
    x = as[i];
    if (min > x) {
      min = x;
      tmp = x - as[i - 1];
      if (diff < tmp) diff = tmp;
    } else {
      tmp = x - min;
      if (diff < tmp) diff = tmp;
    }
  }
  return diff;
}

int main(int argc, char *argv[])
{
  char row[6];
  int n = atoi(fgets(row, sizeof(row), stdin));
  int as[n];
  int i;
  long answer;

  for (i = 0; i < n; i++) {
    scanf("%d", &as[i]);
  }

  answer = maximumProfit(as, n);

  printf("%ld\n", answer);

  return 0;
}