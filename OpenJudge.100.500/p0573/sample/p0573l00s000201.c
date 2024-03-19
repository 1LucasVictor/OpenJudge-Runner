#include <stdio.h>

int main(){
  char text[5];
  scanf("%s",text);
  
  if(text[0]==text[1]&&text[2]==text[3]&&text[0]!=text[2]) printf("Yes\n");
  else if(text[0]==text[2]&&text[1]==text[3]&&text[0]!=text[1]) printf("Yes\n");
  else if(text[0]==text[3]&&text[1]==text[2]&&text[0]!=text[1]) printf("Yes\n");
  else printf("No\n");
  return 0;
}
