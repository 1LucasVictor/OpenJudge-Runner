#include<stdio.h>

static int digits(int n)
{
  int d = 1;
  
  if (n < 0) {
    n = -n;
    d++;
  }
  
  while (n /= 10)
    d++;
  
  return d;
}

int main()
{
  int a, b;
  while (scanf("%d%d", &a, &b) != EOF)
	printf("%d\n", digits(a+b));
  
  return 0;
}

