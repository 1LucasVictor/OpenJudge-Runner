#include<stdio.h>

int main(void){
  
  int result = 0,i;
  char s[4];
  
  scanf("%s",s);
  
  for(i = 0;i < 4;i++){
    if(s[i] == '1'){
      result++;
    }
  }
  
  printf("%d",result);
  return 0;
}