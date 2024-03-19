#include<stdio.h>
int main(){
  int unused __attribute__((unused));
  char S[4];
  unused = scanf("%s", S);

  if(S[1]=='B') printf("ARC");
  else if(S[1]=='R') printf("ABC");
  return 0;
}