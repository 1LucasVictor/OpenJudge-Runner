#include<stdio.h>

int main(void)
{
  int a, b, c, i, x, cnt = 0;

  scanf("%d %d %d", &a, &b, &c);

  for(i = 1; i < c; i++) {
    if(c % i == 0) {
      x = c / i;
      if(a <= x && x <= b) {
	cnt++;
      }
    }
  }

  printf("%d\n", cnt);

  return 0;
}