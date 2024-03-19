#include<stdio.h>
#include<string.h>
int main(){
   char S[10];
   char T[11];
   int i;
   scanf("%s",S);
   scanf("%s",T);
   
   for(i = 0;S[i]!='\0';i++){
      if(S[i]!=T[i]){
         printf("No\n");
      }
   }
   if(T[i+1]=='\0'){
      printf("Yes\n");
   }else{
      printf("No\n");
   }
   return 0;
}
   
   