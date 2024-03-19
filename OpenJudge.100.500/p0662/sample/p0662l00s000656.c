#include <stdio.h>

int main(void) {
  int a, b, c, d;
  int i;

  scanf("%d %d %d %d", &a, &b, &c, &d);

  if(a <= c) {
    if(b <= d) {
      if(b-c >= 0)
	printf("%d\n", b-c);
      else
	printf("0\n");
    }
    else {
      printf("%d\n", d-c);
    }
  }
  else {
    if(b <= d) {
      printf("%d\n", b-a);
    }
    else {
      if(d-a >= 0)
	printf("%d\n", d-a);
      else
	printf("0\n");
    }
  }
  return(0);
}