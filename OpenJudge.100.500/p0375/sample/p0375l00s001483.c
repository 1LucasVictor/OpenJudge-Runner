#include <stdio.h>

int main()
{
  int i = 3, n;
  scanf("%d", &n);
  while(i <= n) {
    if(0 == (i % 3)) {
      printf(" %d", i);
      i++;
    }
    else if(3 == (i % 10)) {
      printf(" %d", i);
      i++;
    }
    else {
      i++;
    }
  }
  printf("\n");
  return 0;
}