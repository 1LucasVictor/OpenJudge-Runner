#include<stdio.h>
#include<string.h>
int main(){
   char S[4];
   scanf("%s",S);

   if(strcmp(S, "ARC")==0){
      printf("%s","ABC");

      }else if(strcmp(S, "ABC")==0){
      printf("%s","ARC");
   }
   return 0;
}
