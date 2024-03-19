#include <stdio.h>
#include <stdlib.h>

unsigned int calcmin(unsigned int l, unsigned int r) {
  if(r - l >= 2018)
    return 0;
  
  unsigned int i, j;
  unsigned int min = (l * (l+1)) % 2019;

  for(i = l; i < r; i++) {
    for(j = i+1; j <= r; j++) {
      if(min > (i*j) % 2019)
	min = (i*j) % 2019;
    }
  }
  return min;
}

  
int main(void) {
  unsigned int l, r;

  scanf("%u", &l);
  scanf("%u", &r);

  printf("%u\n", calcmin(l, r));

  return 0;
}
