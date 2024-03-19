#include<stdio.h>
#include<string.h>
#include<stdbool.h>

int main(void){
   int n = 10;
   char s[n];
   char t[n+1];
   bool yes = true;

   scanf("%s",s);
   scanf("%s",t);
   
   for(int i=0;i<strlen(s);i++){
      if(s[i]!=t[i]){
         yes = false;
      }
   }
   if(yes){
      printf("Yes\n");
   } else {
      printf("No\n");
   }
   return 0;
}
      
