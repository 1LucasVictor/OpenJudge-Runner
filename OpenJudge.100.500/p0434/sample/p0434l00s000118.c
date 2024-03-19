#include <stdio.h>

int main(void){
  int temp = 0;
  scanf("%d", &temp);
  
  if(temp >= 30){
    printf("Yes");
  } else {
    printf("No");
  }
  return 0;
}