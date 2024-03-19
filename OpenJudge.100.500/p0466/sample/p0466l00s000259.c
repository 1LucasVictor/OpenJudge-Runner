/* A - Registration */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char S[15], T[15], *s, i;
  scanf("%s", S);
  scanf("%s", T);
  s = (char*)malloc(sizeof(char) * (strlen(S) + 1));
  for(i = 0; i < strlen(S); i++){
    s[i] = T[i];
  }
  s[i] = '\0';
  if(strcmp(S, s) == 0){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
}
