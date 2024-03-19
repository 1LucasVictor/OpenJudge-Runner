#include <stdio.h>

int maximumProfit(int *as, int n)
{
  int i, x, tmp;
  int diff = -100000000;
  int min = 1000000000;
  min = as[0];
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
  int i, answer;

  for (i = 0; i < n; i++) {
    scanf("%d", &as[i]);
  }

  answer = maximumProfit(as, n);

  printf("%d\n", answer);

  return 0;
}