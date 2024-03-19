#include <stdio.h>

int main(void){
  char str[21];
  char ans[21];
  
  int num;
  int i;
  
  for( i = 0; i < 21; i++ ){
    ans[i] = '\0';
    str[i] = '\0';
  }
  
  scanf("%s", str);  
    
  for( i = 0; i < 21; i++ ){
    if( str[i] != '\0' ) num = i;
  }
  
  for( i = 0; i <= num; i++ ){
    ans[i] = str[num-i];
  }
  
  printf("%s\n", ans);
  
  return 0;
}