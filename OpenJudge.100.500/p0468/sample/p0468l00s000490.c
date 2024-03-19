#include<stdio.h>
int main(){
  char S[3];
  int i;
  scanf("%s",&S);
  if (strcmp(S, "ABC") == 0)
    printf("ARC");
  else
    printf("ABC");
  return 0;
}