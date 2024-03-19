#include <stdio.h>
#include <stdlib.h>

int main(){
  char s[3];
  scanf("%s",s);
  
  if(s[0]=='A'){
    if(s[1]=='A' && s[2]=='A'){
      printf("No");
      return 0;
    }
  }
  
  if(s[0]=='B'){
    if(s[1]=='B' && s[2]=='B'){
      printf("No");
      return 0;
    }
  }
  
  printf("Yes");
  return 0;
}