#include<stdio.h>
#include<string.h>
int main(){
   char S[11];
   char T[11];
   fgets(S,11,stdin);
fgets(T,11,stdin);


    if(strlen(S)+1==strlen(T)){
       printf("Yes");
    }else{
       printf("No");
    }
   
    return 0;
}