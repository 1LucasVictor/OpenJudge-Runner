#include<stdio.h>
#include<stdlib.h>

int main(){
  char S[11]={};
  char T[12]={};
  int i=0;
  
  if( scanf("%s",S) == 1);
  if( scanf("%s",T) == 1);
  
  for(i=0;i<10;i++){
    if(S[i] != T[i]){
      if(S[i]=='\0'){
        if(T[i+1]=='\0'){
           
         printf("Yes\n");
         return 0;
      }
      }
      printf("No\n");
      return 1;
    }
    
  }

}