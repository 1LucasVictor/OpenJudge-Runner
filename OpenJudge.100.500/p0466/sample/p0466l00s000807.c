#include<stdio.h>
#include<stdlib.h>

int main(){
  char S[15];
  char T[15];
  int i=0;
  
  scanf("%s",&S);
  scanf("%s",&T);
  
  for(i=0;;i++){
    if(S[i]!="\0"){
      break;
    }
    
    if(S[i] != T[i]){
      printf("No\n");
      return 1;
    }
  }
  printf("Yes\n");
  return 0;
}