#include <stdio.h>

int main(){
  int a;
  scanf("%d", &a);
  a = a % 10;
  
  switch(a){
    case 3:
      puts("bon");
      break;
    case 0:
    case 1:
    case 6:
    case 8:
      puts("pon");
      break;
    default:
      puts("hon");
      break;
  }
  
  return 0;
}