//0614 B問題
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {

  int x, y, i=0, k;

  scanf("%d%d", &x, &y);

  if ((x<1)||(100<x)||(y<1)||(100<y)) {
    return -1;
  }

  while (i<=x) {
    k = y-i*2;
    if (k-(4*(x-i))==0) {
      printf("Yes\n");
      return 0;
    } else {
      i++;
    }
  }
  printf("No\n");

  return 0;
}
