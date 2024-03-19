#include<stdio.h>
int main(){
  char s[3];
  scanf("%s",&s);
  //printf("%s",s);
  if(s[1]=='R'){
  printf("ABC");
  }
  else if(s[1]=='B'){
  printf("ARC");
  }
  else printf("error");
return 0;
}