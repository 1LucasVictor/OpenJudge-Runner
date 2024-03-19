#include<stdio.h>
#include<string.h>
#define NUM 10
int main(){
   char S[NUM],T[NUM];
   int i,cnt=0;
   scanf("%s",S);
   scanf("%s",T);
   for(i=0;i<strlen(T);i++){
      if(97<=S[i]&&S[i]<=122){
         if(1<=strlen(S)&&strlen(S)<=10){
            if(T[i]==S[i]&&strlen(T)==strlen(S)+1){
               cnt++;
            }else{
               cnt=0;
            }
         }
      }
   }
   if(cnt>0){
      printf("Yes");
   }else{
      printf("No");
   }
   return 0;
}
 