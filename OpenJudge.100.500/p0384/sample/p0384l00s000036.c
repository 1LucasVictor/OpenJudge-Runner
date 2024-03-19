#include <stdio.h>

int main(void){
  char ch;

  while(1){
    scanf("%c",&ch);
    if('A'<=ch && ch<='Z'){
      ch+='a'-'A';
    }
    else if('a'<=ch && ch<='z'){
      ch-='a'-'A';
    }
    printf("%c",ch);
    if(ch=='\n')break;
  }
}

