#include <stdio.h>

int main(){
  char	s[4]={0};
  
  scanf("%s", s);
  if( s[0]==s[1] && s[1]==s[2] ){ printf("No"); }
  else							{ printf("Yes"); }
  return 0;
}