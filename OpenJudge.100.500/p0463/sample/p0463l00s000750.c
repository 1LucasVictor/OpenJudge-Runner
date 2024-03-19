/* ex3_2
   moka223711 */

#include <stdio.h>

int main(void){
  int N;
  scanf("%d", &N);
  
  switch(N % 10){
    case 2: case 4: case 5: case 7: case 9:
      printf("hon");
      break;
    case 0: case 1: case 6: case 8:
      printf("pon");
      break;
    default:
      printf("bon");
  }
  
  return 0;
}
