#include <stdio.h>
#include <string.h>
int main(){
 char S[10];
 scanf("%s",S);
 char T[strlen(S)+1];
 scanf("%s",T);
 if(strncmp(S,T,strlen(S))==0){
  if(strlen(T)==strlen(S)+1)printf("Yes");
   else printf("No");
 }else{
 printf("No");
 }
 return 0;
}