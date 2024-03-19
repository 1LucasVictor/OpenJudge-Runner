#include<stdio.h>

int main()
{
  char ch;

  while(1){
    scanf("%c",&ch);
    
    if('a' <= ch && ch <= 'z'){
      printf("%c",ch-32);
    }else if(65 <= ch && ch <= 122) {
      printf("%c",ch+32);
    }else printf("%c",ch);
    
    if(ch == '\n') break;
  }

  return 0;
}
