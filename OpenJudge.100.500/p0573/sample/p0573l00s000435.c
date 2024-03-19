#include <stdio.h>

int main(){
  char s[4];
  scanf("%s",s);
  int flag = 0;
  if(s[0] == s[1] && s[2] == s[3] && s[0] != s[2]) flag = 1;
  if(s[0] == s[2] && s[1] == s[3] && s[0] != s[1]) flag = 1;
  if(s[0] == s[3] && s[1] == s[2] && s[0] != s[1]) flag = 1;
  if(flag = 1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}