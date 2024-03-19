#include<stdio.h>
#include<string.h>
int main(){
   char s[10];
   scanf("%s",s);
   char t[strlen(s)+1];
   scanf("%s",t);
   int i,judg=0;
   for(i=0;i<strlen(s);i++){
      if(s[i]==t[i]){
      }else{
         judg++;
         break;
      }
   }
   if(judg==0){
      printf("Yes");
   }else{
      printf("No");
   }
   return 0;
}
