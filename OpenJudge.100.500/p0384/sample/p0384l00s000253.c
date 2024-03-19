#include <stdio.h>
int main(){
  char txt;

  while(1){
    scanf("%c",&txt);

    if(txt>96 && txt<123)txt-=32;
    else  if(txt>64 && txt<91)txt+=32;

    printf("%c",txt);
   if(txt=='\n')break;
  }
  return 0;
}