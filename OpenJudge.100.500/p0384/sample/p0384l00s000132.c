#include <stdio.h>
#include <ctype.h>

int main(){
  char ch;
  
  while(ch != '\n'){
    scanf("%c", &ch);
    if(isupper(ch))//if LARGE charactor
      ch = tolower(ch);
    else if(islower(ch))//if small charactor
      ch = toupper(ch);
    
    printf("%c", ch);
  }
  return 0;
}