#include <stdio.h>
#include <ctype.h>

int main(){
   char ch;

   scanf("%c", &ch);
   while(ch != 0x0a){
      if( isalpha(ch) ){
         if( islower(ch) ){
            ch = toupper(ch);
            printf("%c", ch);
            scanf("%c", &ch);
         } else{
             ch = tolower(ch);
             printf("%c", ch);
             scanf("%c", &ch);
         }
      } else{
           printf("%c", ch);
           scanf("%c", &ch);
      }
   }

   printf("\n");
   return 0;
}

