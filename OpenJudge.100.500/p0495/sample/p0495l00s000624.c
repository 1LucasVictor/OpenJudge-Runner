#include<stdio.h>
int main(){
   char S [8];
   scanf("%s",S);

   if((S[0]==S[1])&&(S[1]==S[2])){
      printf("No\n");
   }else{
      printf("Yes\n");
   }
   return 0;
}