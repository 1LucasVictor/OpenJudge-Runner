#include <stdio.h>

int main(void) {
  int a, b, x;

  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &x);

  if(a + b < x){
    printf("NO");
  } else if(a > x) {
    printf("NO");
  } else {
    printf("YES");
  }

  return 0;
}