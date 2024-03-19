#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char ch;
  scanf("%c",&ch);
  while(!('\n'==ch)){
    if(islower(ch)){
      printf("%c",toupper(ch));}
    else printf("%c",tolower(ch));
    scanf("%c",&ch);
    }
  printf("\n");
  return 0;}