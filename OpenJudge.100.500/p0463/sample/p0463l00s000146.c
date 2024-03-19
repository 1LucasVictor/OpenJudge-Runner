#include <stdio.h>
int main(void){
  int N;
  int ichi;
  scanf("%d",&N);
  ichi = N % 10;
  if(ichi == 3){
    printf("bon\n");
  }
  else if(ichi == 0 || ichi == 1 || ichi == 6 || ichi == 8){
    printf("pon\n");
  }
  else{
    printf("hon\n");
  }
  return 0;
}