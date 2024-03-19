#include<stdio.h>
#include<ctype.h>

int main(void){
   int i;
   char str[1205];
   scanf("%[^\n]",str);
   for(i=0;str[i]!='\0';i++){
      if( islower(str[i]) ){printf("%c",toupper(str[i]));}
      else if( isupper(str[i]) ){printf("%c",tolower(str[i]));}
      else printf("%c",str[i]);
   }
   printf("\n");
   return 0;
}

