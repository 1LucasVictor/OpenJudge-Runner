#include<stdio.h>

int main(void){
  int a;
  scanf("%d", &a);
  a = a % 10;
  switch (a) {
  	case 2:
  	case 4:
  	case 5:
    case 7:
    case 9:
  		printf("hon\n");
  		break;
  	case 0:
  	case 1:
  	case 6:
  	case 8:
  		printf("pon\n");
  		break;
  	case 3:
  		printf("bon\n");
  }
  return 0;
}
