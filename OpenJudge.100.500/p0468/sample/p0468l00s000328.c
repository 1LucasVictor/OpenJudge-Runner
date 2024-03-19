#include <stdio.h>
#include <string.h>
 
int main(void){
   char S[3];
 
   scanf("%s",S);  

   if(!strcmp(S, "ABC")){
      printf("ARC");     
   }
   else{
      printf("ABC");
   }
}