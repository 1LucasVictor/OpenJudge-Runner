#include<stdio.h>
 
int main(){
  int i;
  char num, str[4];
  
  scanf("%s", &str);
  num = str[0];
  
  for(i = 1; i <= 3; i++){
    if(num == str[i]){
      printf("Bad");
      break;
    }else if(num == str[3]){
    printf("Good");
  }
    num = str[i];
  } 
  
  return 0;
}