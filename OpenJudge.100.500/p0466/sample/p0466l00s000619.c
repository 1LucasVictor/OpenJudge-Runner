#include <stdio.h>

int main(void){
  char s[100],t[100];
  int i;
  int flag = 0;
  
  scanf("%s %s",s,t);
  
  for(i = 0; s[i] != '\0'; i++){
    if(s[i] != t[i]){
      printf("No\n");
      return 0;
    }
  }
  
  printf("Yes\n");
  return 0;
}
 
  
      