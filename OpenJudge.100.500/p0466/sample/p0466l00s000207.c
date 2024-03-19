#include<stdio.h>
#include<stdbool.h>

int main(void){
   char s[10];
   int n=0;
   scanf("%s",s);
   for(int i=0;s[i]!='\0';i++){
      n++;
   }
   char t[n+1];
   scanf("%s",t);
   bool judge=true;
   for(int j=0;j<n;j++){
      if(s[j]!=t[j]){
         judge=false;
         printf("No");
         break;
      }
   }
   if(judge){
      printf("Yes");
   }

   return 0;
}
