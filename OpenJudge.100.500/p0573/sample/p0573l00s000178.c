#include<stdio.h>

int main(){
  char s[4];
  scanf("%s", s);
  
  int two;
  if(s[0] == s[1] && s[2] == s[3] && s[0] != s[2]){
    two = 1;
  }else if(s[0] == s[2] && s[1] == s[3] && s[0] != s[1]){
    two = 1;
  }else if(s[0] == s[3] && s[1] == s[2] && s[0] != s[1]){
    two = 1;
  }else{
    two = 0;
  }
  
  if(two){
    printf("Yes");
  }else{
    printf("No");
  }
  
  return 0;
}
