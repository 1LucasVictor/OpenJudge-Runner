#include <stdio.h>

int main(){
  char s[40] = "";
  if(scanf("%s",s) < 0){
    printf("ERROR\n");
    return 1;
  }
  if(s[0] == s[1]){
    if(s[2] == s[3] && s[0] != s[2]){
      printf("Yes");
      return 0;
    }
  }else if(s[0] == s[2]){
    if(s[1] == s[3] && s[0] != s[1]){
      printf("Yes");
      return 0;
    }
  }else if(s[0] == s[3]) {
    if(s[1] == s[2] && s[0] != s[1]){
      printf("Yes");
      return 0;
    }
  }
  printf("No");
  return 0;
}
