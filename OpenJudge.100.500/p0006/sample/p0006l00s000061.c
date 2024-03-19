#include <stdio.h>

int main (int argc, char* argv[])
{
  int n, i;
  long int capital=100000;
  
  scanf("%d", &n);
  for (i=0; i<n; i++) {
    capital *= 1.05;
    if (0 < capital % 1000) {
      capital = capital / 1000 + 1;
      capital *= 1000;
    }
  }

  printf("%ld\n", capital);
  return 0;
}