#include <stdio.h>
int main(void){
  
  char	s[4];
  
  scanf("%s",s);
  
  if(s[0]==s[1]){ printf("Bad"); return 0; }
  if(s[1]==s[2]){ printf("Bad"); return 0; }
  if(s[2]==s[3]){ printf("Bad"); return 0; }
  if(s[3]==s[4]){ printf("Bad"); return 0; }
  
  printf("Good");
  return 0;
}