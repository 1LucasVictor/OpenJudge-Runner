/* ex 3_2
  kt125 */

#include <stdio.h>

int main(void) {
  int n;  //number
  scanf("%d", &n);
  
  switch(n % 10){ // nの一の位で場合分け
    case 2: case 4: case 5: case 7: case 9:
      printf("hon\n"); break;
    case 0: case 1: case 6: case 8:
      printf("pon\n"); break;
    case 3:
      printf("bon\n"); break;
  }
  return 0;
}

