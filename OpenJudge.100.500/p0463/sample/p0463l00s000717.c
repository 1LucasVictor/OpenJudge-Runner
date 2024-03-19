#include <stdio.h>

int main(void)
{
  int N;
  
  scanf("%d",&N);
  
  N = N%100;
  
  switch(N%10) {
    case 0:puts("pon"); break;
    case 1:puts("pon"); break;
    case 2:puts("hon"); break;
    case 3:puts("bon"); break;
    case 4:puts("hon"); break;
    case 5:puts("hon"); break;
    case 6:puts("pon"); break;
    case 7:puts("hon"); break;
    case 8:puts("pon"); break;
    case 9:puts("hon"); break;
  }
  return 0;
}
