#include <stdio.h>
int main(void){
  int a;
  scanf("%d",&a);
  switch(a%3){
    case 0:
      printf("%d",3);
      break;
    case 1:
      printf("%d",1);
      break;
    case 2:
      printf("%d",2);
      break;
    default:
      break;
  }
  
 return 0; 
}