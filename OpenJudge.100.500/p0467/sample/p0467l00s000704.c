#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC167D
//ABC167C
//ABC167B
int main(void) {
  int a, b, c, n, k, i, cou=0, tmp;
  scanf(" %d %d %d %d", &a, &b, &c, &k);

  if(a>=k) printf("%d", k);
  else if(a+b>=k) printf("%d", a);
  else printf("%d", a-(k-a-b));
}