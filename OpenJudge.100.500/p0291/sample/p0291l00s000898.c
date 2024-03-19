#include <stdio.h>
#include <limits.h>

int maximumProfit(int *as, int n)
{
  int i;
  int diff;
  int max_diff = INT_MIN;
  int min = as[0];
  for (i = 1; i < n; i++) {
    diff = as[i] - min;
    if (max_diff < diff) {
      max_diff = diff;
    }
    if (min > as[i]) {
      min = as[i];
    }
  }
  return max_diff;
}

int main(int argc, char *argv[])
{
  char row[6];
  int n = atoi(fgets(row, sizeof(row), stdin));
  int as[n];
  int i;
  int answer;

  for (i = 0; i < n; i++) {
    scanf("%d", &as[i]);
  }

  answer = maximumProfit(as, n);

  printf("%d\n", answer);

  return 0;
}