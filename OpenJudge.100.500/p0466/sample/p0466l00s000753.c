/* A - Registration */

#include <stdio.h>
#include <string.h>

int main(void){
  char S[10], T[11], s[11], i;
  scanf("%s", S);
  scanf("%s", T);
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
