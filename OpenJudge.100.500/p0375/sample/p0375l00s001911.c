#include <stdio.h>

int main(void){
  int i, x, n;
  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    if(10 <= i && i <= 99)
      x = i / 10;
    else if(100 <= i && i <= 999)
      x = i / 100;
    else
      x = i / 1000;

    if(i % 3 == 0 || i % 10 == 3 || x % 10 == 3)
      printf(" %d", i);
  }
  printf("\n");
  return 0;
}