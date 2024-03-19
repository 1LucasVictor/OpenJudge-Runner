#include <stdio.h>
#include <string.h>
int main(void){
  char S[10];
  char T[11];
  int i, j;
  scanf("%s\n %s", S, T);
  
  for(i=0;i<=sizeof(S);i++){
    if(S[i]!=T[i] || S[i]=='\0'){
        printf("No");
      }else printf("Yes");
    return 0;
  }
  printf("No");
  return 1;
}