#include<stdio.h>
int main(void){
  char S[3];
  scanf("%s",S);
  if(S[0] == S[1]){
    if(S[1] == S[2]){
      printf("No");
      return 0;
    }
  }
  printf("Yes");
  return 0;
}