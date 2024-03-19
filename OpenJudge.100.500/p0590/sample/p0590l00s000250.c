#include <stdio.h>

int main() {
  int a[5], k;
  int i, j, tmp;
  
  for ( i = 0; i < 5; i++ ) {
    scanf("%d", &a[i]);
  }
  scanf("%d", &k);
  
  if ( a[4] - a[0] > k ) {
    printf(":(\n");
  }
  else {
    printf("Yay!\n");
  }
}