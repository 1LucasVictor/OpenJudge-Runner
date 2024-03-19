#include <stdio.h>
#include <string.h>
int main(void){
  char S[10];
  char T[11];
  int i, j;
  scanf("%s\n %s", S, T);
  
  for(i=0;i<=9;i++){
    if(S[i]!=T[i]){
        printf("No");
      }else printf("Yes");
    return 0;
  }
  printf("No");
  return 1;
}