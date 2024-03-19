#include <malloc.h>
#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//ABC170D
//ABC170C
//ABC170B
int main(void) {
  int x, y, n, k, i, cou=0, tmp;
  scanf("%d %d", &x, &y);

  if(2*x<=y&&4*x>=y&&y%2==0) printf("Yes");
  else printf("No");
}