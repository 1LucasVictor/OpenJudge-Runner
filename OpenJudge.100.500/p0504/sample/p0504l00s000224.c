#include <stdio.h>

int main (){
  int h, a, qtdAtaque=0;
  scanf("%d%d", &h, &a);

  while(h > 0) {
    qtdAtaque++;
    h=h-a;
  }

  printf("%d\n", qtdAtaque);

  return 0;
}
