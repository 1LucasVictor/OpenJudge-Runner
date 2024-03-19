#include <stdio.h>

long fibo(int n)
{
  static long cache[50] = {1, 1};
  if (cache[n]>0) return cache[n];
  if (n<=1) return 1;
  long f = fibo(n-1) + fibo(n-2);
  cache[n]=f;
  return f;
}


int main()
{
  char str[10];
  int n = 0;
  char *p;
  fgets(str, 10, stdin);
  p = str;
  do {
    n = n*10 + *p-'0';
    p++;
  } while (*p&0x20);

  printf("%ld\n", fibo(n));
  return 0;
}
