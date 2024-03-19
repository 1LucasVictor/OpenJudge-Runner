#include <stdio.h>
#include <ctype.h>
int main(){
  int i;
  while((i=getchar())!=EOF){
    if(isupper(i))i=tolower(i);
    else i=toupper(i);
    putchar(i);
    if(i=='\n')break;
  }
  return 0;
}