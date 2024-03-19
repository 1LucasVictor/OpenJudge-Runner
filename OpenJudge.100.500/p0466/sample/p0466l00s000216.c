#include <stdio.h>
#include <string.h>
int main(void){
  char S[11], T[12];
  scanf("%s", S);
  scanf("%s", T);
  for(int i=0; i<strlen(S); i++){
    if(T[i]!=S[i]){
      printf("No\n");
      return 0;
    }
  }
  printf("Yes\n");
  return 0;
}