#include <stdio.h>
#include <string.h>
#define warn_unused_result

int main (void){
  
  int i,count = 0;
  char S[256],T[256];
  
  if(scanf("%s",S) == 1);
  
  if(scanf("%s",T) == 1);
  
  if((strlen(S)<1 || strlen(S)>200000) || (strlen(T)<1 || strlen(T)>200000)){
    return 1; 
  }
  
  if(strlen(S) != strlen(T)){
    return 1;
  }
  
  for(i=0;(i<strlen(S))&&(i<strlen(T));i++)
  if((S[i]<'a' || S[i]>'z') || (T[i]<'a' || T[i]>'z')){
    return 1;
  }
  
  for(i=0;i<strlen(S);i++){
    if(S[i] != T[i]){
      count ++;
    }
  }
             
  printf("%d",count);
  
  return 0;
  
}