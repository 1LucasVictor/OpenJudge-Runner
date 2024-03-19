#include<stdio.h>
#include<string.h>
int main(){
   char S[11];
   char T[12];
   int i;
   int count = 0;
   scanf("%s",S);
   scanf("%s",T);
   
   for(i = 0;i<strlen(S);i++){
      if(S[i]==T[i]){
         count++;
      }
   }
   if(count==strlen(S)) {
         printf("Yes");
      } else {
         printf("No");
      }
   return 0;
}
   