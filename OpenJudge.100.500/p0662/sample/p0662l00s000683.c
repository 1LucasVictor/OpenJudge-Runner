#include <stdio.h>

int main(void){

  int a,b,c,d;
  scanf("%d %d %d %d", &a, &b, &c, &d);
  int start = a;
  if (c > a) {
    start = c;
  }
  int end = b;
  if (d < end) {
    end = d;
  }
  int answer = end-start;
  if (answer < 0) {
    answer = 0;
  }
  printf("%d\n", answer);

  return 0;
}