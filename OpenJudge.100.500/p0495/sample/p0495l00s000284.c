#include <stdio.h>
int main(){
  char *S[3];
  scanf("%s",S);
  if(strcmp(S,"AAA")==0 || strcmp(S,"BBB")==0){
    printf("No");
    return 0;
  }
  else{
    printf("Yes");
    return 0;
  }
  return 0;
}