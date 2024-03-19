#include <stdio.h>
int main(void){
  int n,num;
  scanf("%d",&n);
  num = n % 10;
  
  if(num == 2)
    printf("hon");
  else if(num == 4)
    printf("hon");
  else if(num == 5)
    printf("hon");
  else if(num == 7)
    printf("hon");
  else if(num == 9)
    printf("hon");
  
  else if(num == 0)
    printf("pon");
  else if(num == 1)
    printf("pon");
  else if(num == 6)
    printf("pon");
  else if(num == 8)
    printf("pon");
  
  else if(num == 3)
    printf("bon");
  return 0;
}