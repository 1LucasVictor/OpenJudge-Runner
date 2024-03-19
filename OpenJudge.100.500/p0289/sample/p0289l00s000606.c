#include <stdio.h>

int gcd(int x, int y);
int gcdRe(int x, int y);
void swap(int *x, int *y);

int main(void){
  int x, y;
  scanf("%d %d", &x, &y);
  x = gcd(x, y);
  printf("%d\n", x);
  return 0;
}

int gcd(int x, int y){
  if (x < y)
    swap(&x, &y);
  return gcdRe(x, y);
}

int gcdRe(int x, int y){
  if (y <= 0)
    return x;
  else
    return gcdRe(y, x % y);
}

void swap(int *x, int *y){
  int tmp;
  tmp = *x;
  *x = *y;
  *y = tmp;
  return;
}