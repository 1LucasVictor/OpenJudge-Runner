#include <stdio.h>

int main(void)
{
  int n, x;
  int i,j,k;
  int sum = 0;

  scanf("%d %d", &n, &x);

  for(i = 1; i < n; i++) {
    for(j = i+1; j < n; j++) {
      for(k = i+2; k < n; k++) {
        if(i+j+k == x)
          sum = sum + 1;
      }
    }
  }

  printf("%d", sum);

  return 0;
}