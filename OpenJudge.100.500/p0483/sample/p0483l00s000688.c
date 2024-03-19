#include<stdio.h>
int main(void){
  int i;
  int number;
  int check = 0;
  
  scanf("%d", &number);
  
  for(i = 0; i < 3; i++) {
    if(number % 10 == 7) {
      check = 1;
    }
    number = number / 10;
  }
  if(check == 1){
    printf("Yes");
  }else{
    printf("No");
  }
  return 0;
}