// Maximum profit
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
  int a[200000];
  int i, j, n, max, min;

  max = INT_MIN;
  // input
  scanf("%d", &n);
  for(i = 0; i < n; i++) {
    scanf("%d", &a[i]);
    if(i == 0) {
      max = 0;
      min = a[i];
    }
    else {
      if(max < a[i] - min) max = a[i] -  min;
      if(min > a[i]) min = a[i];
    }
  }

  // output
  printf("%d\n", max);

  
  return 0;
}

