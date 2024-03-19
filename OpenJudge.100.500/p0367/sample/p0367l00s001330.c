#include <stdio.h>

int main() {
  int i, a, b, c, t = 0;

  scanf("%d",&a);
  scanf("%d",&b);
  scanf("%d",&c);

  for(i = a; i < b; i++) {
    if(c % i == 0) {
      t++;
    }
  }
  printf("%d\n",t);

  return 0;
}