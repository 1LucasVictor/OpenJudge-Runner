#include <stdio.h>
#include <stdlib.h>

int main(){
  int N;
  scanf("%d",&N);
  N %= 10;
  switch(N){
      case 0:
        printf("pon\n");
        break;
      case 1:
        printf("pon\n");
        break;
      case 2:
        printf("hon\n");
        break;
      case 3:
        printf("bon\n");
        break;
      case 4:
        printf("hon\n");
        break;
      case 5:
        printf("hon\n");
        break;
      case 6:
        printf("pon\n");
        break;
      case 7:
        printf("hon\n");
        break;
      case 8:
        printf("pon\n");
        break;
      case 9:
        printf("hon\n");
        break;  
  }
  return 0;
}