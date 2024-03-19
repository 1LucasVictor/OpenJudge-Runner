#include <stdio.h>

int main()
{
    long x;
    int sum;
    scanf("%ld", &x);
    while(x != 0) {
      sum=0;
      while(x != 0) {
          sum += x%10;
          x = x/10;
      }
      printf("%d\n", sum);
      scanf("%d", &x);
    }

    return 0;
}

