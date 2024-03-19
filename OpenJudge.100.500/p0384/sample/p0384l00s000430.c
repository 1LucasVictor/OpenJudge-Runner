#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main(){
  char ch,a;
  scanf("%c",&ch);
  a='\n';
  while(!(a==ch)){
    if(islower(ch)){
      printf("%c",toupper(ch));}
    else printf("%c",tolower(ch));
    scanf("%c",&ch);
    }
  printf("%c",a);
  return 0;}