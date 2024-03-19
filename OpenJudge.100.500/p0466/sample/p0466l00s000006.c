#include <stdio.h>
#include <string.h>
int main(void){
  char S[10],T[11];
  int count = 0,i;
  scanf("%s %s",S,T);
  for(i=0;i<strlen(S);i++){
    if(S[i] == T[i]){
      count += 1;
    }
  }
  if(count == strlen(S)){
    printf("Yes\n");
  }
  else{
    printf("No\n");
  }
  return 0;
}