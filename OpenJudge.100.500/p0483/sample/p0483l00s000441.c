#include <stdio.h>

int main(void){

  int n;
  scanf("%d", &n);
  int d1,d2,d3;
  d1 = n%10;
  n /=10;
  d2 = n%10;
  n /= 10;
  d3 = n%10;

  if (d1 == 7 || d2 == 7 || d3 == 7) {
    printf("Yes\n");
  } else {
    printf("No\n");
  }

  return 0;
}