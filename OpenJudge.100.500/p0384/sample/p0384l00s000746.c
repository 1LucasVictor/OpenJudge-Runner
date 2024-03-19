#include <stdio.h>
#include <ctype.h>
int main(void){
   char s;
   while((s=getchar())!=EOF){
      if(isupper(s)) s=tolower(s);
      else if(islower(s)) s=toupper(s);
      putchar(s);
   }
   return 0;
}