#include<stdio.h>
int main(){
  int n,p;
  scanf("%d",&n);
  switch(n%10){
  	case 0:
    case 1:
    case 6:
    case 8:
      printf("pon\n");
      break;
    case 3:
      printf("bon\n");
      break;
    default:
      printf("hon\n");
  }
  return 0;
}