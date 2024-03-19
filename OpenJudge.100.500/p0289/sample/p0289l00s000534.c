#include <stdio.h>

int main(void)
{
  long x, y, amari;
  long i, GCD_x, GCD_y, GCD;
  int tmp;

  scanf("%ld %ld", &x, &y);

  if(y > x){
    tmp = x;
    x = y;
    y = tmp;
  }

  amari = x % y;
  if(amari == 0){
    for(i = 1; i <= x; i++){
      GCD_x = x % i;
      if(GCD_x == 0){
	GCD = i;
      }
    }
  } else {
    for(i = 1; i <= amari; i++){
      GCD_x = amari % i;
      GCD_y = y % i;
      if(GCD_x == 0 && GCD_y == 0){
	GCD = i;
      }
    }
  }

  printf("%ld\n", GCD);

  return 0;
}