#include <stdio.h>

int main(void){
  int num;
  scanf("%d",&num);
  switch(num % 2){
    // Nが偶数の時は半分
    case 0:
      printf("%d",num/2);
      break;
    
    // Nが奇数の時は1足して半分
    case 1:
      printf("%d",(num+1)/2);
      break;
    }
}