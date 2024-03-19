#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC118A
int main(void) {
  int n, k, i, cou=0, a, b, tmp;
  scanf("%d %d", &a, &b);
  n=b%a==0 ? a+b : b-a;
  printf("%d", n);
}