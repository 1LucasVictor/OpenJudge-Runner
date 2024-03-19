#include<stdio.h>

int main(void){
  char number[3];
  int i;
 
  scanf("%s" "%s" "%s", &number[0], &number[1], &number[2]);
  for(i = 0; i < 3; i++){
    if(number[i] == '7'){
      printf("Yes\n");
      return 0;
    }
  }
  printf("No\n");
  return 0;
}