#include<stdio.h>

int main(){
  int i;
  char str[4];
  
  scanf("%s", str);
  
  for(i = 0; i < 3; i++){
    if(str[i] == str[i++]){
      printf("Bad");
      break;
    }
  }
  if(i == 3){
    printf("Good");
  }
  
  return 0;
}