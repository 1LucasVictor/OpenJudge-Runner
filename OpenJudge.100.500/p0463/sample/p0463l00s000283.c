#include <stdio.h>

int main(){
  int n;
  scanf("%d",&n);
  
  switch(n%10){
    case 0:
    case 1:
    case 6:
    case 8:
      printf("pon");
      break;
    case 3:
      printf("bon");
      break;
    default:
      printf("hon");
      break;
  }
  return(0);
}