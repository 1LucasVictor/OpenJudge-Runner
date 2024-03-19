#include <stdio.h>
#include <math.h>

int main(void){

  int d,n;
  scanf("%d %d", &d, &n);
  int answer = pow(100,d);
  if (n < 100) {
    answer *= n;
  } else {
    answer *= 101;
  }
  printf("%d\n", answer);

  return 0;
}