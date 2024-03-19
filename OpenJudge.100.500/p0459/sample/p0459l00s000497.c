
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<math.h>

int main(void) {

  int x, y, i=0;

  scanf("%d%d", &x, &y);

  if ((x<1)||(100<x)||(y<1)||(100<y)) {
    return -1;
  }

  while (i<=x) {
    y -= i*2;
    if (y%4==0) {
      printf("Yes\n");
      return 0;
    } else {
      i++;
    }
  }
  printf("Np\n");

  return 0;
}
