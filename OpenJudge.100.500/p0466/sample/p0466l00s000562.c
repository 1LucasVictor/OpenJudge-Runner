#include<stdio.h>
#include<string.h>
int main(){
   char S[10];
   char T[11];
   int i;
   int count;
   scanf("%s",S);
   scanf("%s",T);
   
   for(i = 0;S[i]!='\0';i++){
      if(S[i]==T[i]){
         count++;
      }
   }
   if(count==strlen(S)&& T[strlen(T)-1]>= 'a'&&T[strlen(T)-1]<= 'z') {
         printf("Yes");
      } else {
         printf("No");
      }
   return 0;
}
   
   