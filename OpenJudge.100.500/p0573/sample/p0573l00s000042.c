#include<stdio.h>

int main() {
  char S[4];
  scanf("%s", S);

  int flag = 0;
  if(S[0] == S[1] && S[2] == S[3] && S[0] != S[2]) flag = 1;
  if(S[0] == S[2] && S[1] == S[3] && S[0] != S[1]) flag = 1;
  if(S[0] == S[3] && S[1] == S[2] && S[0] != S[1]) flag = 1;

  if(flag == 1) printf("Yes\n");
  else          printf("No\n");

  return 0;
}
