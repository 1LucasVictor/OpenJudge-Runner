#include <stdio.h>

int main(void){

  int a, b;
  scanf("%d %d", &a, &b);

  int fuyashitai = b-1;
  int fueru = a-1;
  int kosuu = fuyashitai / fueru;
  if (fuyashitai % fueru != 0) {
    kosuu++;
  }
  printf("%d\n", kosuu);

  return 0;
}