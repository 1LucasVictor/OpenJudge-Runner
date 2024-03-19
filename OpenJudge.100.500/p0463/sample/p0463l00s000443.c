#include<stdio.h>

int main(void){

  int N;

  scanf("%d", &N);

  switch(N % 10){
    case 0 : printf("pon\n"); break;
    case 1 : printf("pon\n"); break;
    case 2 : printf("hon\n"); break;
    case 3 : printf("bon\n"); break;
    case 4 : printf("hon\n"); break;
    case 5 : printf("hon\n"); break;
    case 6 : printf("pon\n"); break;
    case 7 : printf("hon\n"); break;
    case 8 : printf("pon\n"); break;
    case 9 : printf("hon\n"); break;
  }

  return 0;
}
