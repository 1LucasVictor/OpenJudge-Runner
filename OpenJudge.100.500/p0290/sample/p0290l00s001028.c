#include<stdio.h>
#include<math.h>
#define FALSE 0
#define TRUE  1

int isPrime(int x)
{
  if (x <= 1) {
    return FALSE;
  }

  int end = sqrt(x);
  for(int i = 2; i <= end; i++) {
    if (x % i == 0)
      return FALSE;
  }
  return TRUE;
}

int main(void)
{
  int n, x, count;

  scanf("%d", &n);

  count = 0;
  for (int i=0; i<n; i++){
    scanf("%d", &x);
    if (isPrime(x) == TRUE)
      count++;
  }
  printf("%d\n", count);
  
  return 0;
}

