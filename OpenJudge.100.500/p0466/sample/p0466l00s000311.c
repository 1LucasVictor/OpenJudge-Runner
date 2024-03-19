#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char S[10], T[11];
  int i;
  
  scanf("%s", S);
  scanf("%s", T);
  int len = strlen(S);
  for(i = 0; i < len; i++){
    if(S[i] != T[i]){
      printf("No\n");
      exit(1);
    }
  }
  printf("Yes\n");
  return 0;
}