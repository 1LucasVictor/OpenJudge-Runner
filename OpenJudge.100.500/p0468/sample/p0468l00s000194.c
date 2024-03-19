#include<stdio.h>

int main(void){
  char s[3];
  
  scanf("%s",s);
  
  if('B' == s[1]){
    printf("ARC");
  }
  else{
    printf("ABC");
  }
  
  return 0;
}