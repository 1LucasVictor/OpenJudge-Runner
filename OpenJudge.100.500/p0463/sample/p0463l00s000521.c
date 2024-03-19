/* ex3_2 Therefore
   pandacodeb */

#include <stdio.h>

int main(void){
  int N;
  scanf("%d", &N);
  int r = N % 10;       //calculate reminder to determine the last digit of N

  //check number of the last digit (r)
  switch(r){
    case 2: case 4: case 5: case 7: case 9:
      printf("hon\n");
      break;
    case 0: case 1: case 6: case 8:
      printf("pon\n");
      break;
    case 3:
      printf("bon\n");
      break;
    default: break;
  }
  return 0;
}