#include<stdio.h>
int main(){
  char s[4];
  scanf("%c",s);
  if( s[0]==s[1] || s[1] == s[2] || s[2] == s[3]){
    printf("Bad");
  }else{
    printf("Good");
  }
  return 0;
}