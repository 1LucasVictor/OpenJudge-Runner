#include <stdio.h>
#include <string.h>

char exchange(char c) {
  if('A' <= c && c <= 'Z') {
    return c + ('a' - 'A');
  }
  if('a' <= c && c <= 'z'){
      return c+('A'-'a');
  }
  else return c;
}
int main(void){
char  ch;
while(1){
    scanf("%c",&ch);
    if(ch=='\n') break;
    ch=exchange(ch);
    printf("%c",ch);
}
printf("\n");
return (0);
}
