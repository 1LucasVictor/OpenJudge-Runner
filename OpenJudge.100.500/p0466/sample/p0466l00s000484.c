#include<stdio.h>
#include<string.h>
int main(){
   char S[11];
   char T[11];

   scanf("%s",S);
   scanf("%s",T);
   

   if(strlen(S)>=1){
    if(strlen(S)+1==strlen(T)){
       printf("Yes");
    }else{
       printf("No");
    }
   }
   
    return 0;
}