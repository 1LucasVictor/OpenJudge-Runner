#include<stdio.h>

int main()
{
  int ret, N;

  ret = scanf("%d",&N);
  N %= 10;
  switch(N) {
  case 3:
    printf("bon\n");
    break;
  case 0:
  case 1:
  case 6:
  case 8:
    printf("pon\n");
    break;
  default:
    printf("hon\n");
    break;
  }
  return 0;
}

