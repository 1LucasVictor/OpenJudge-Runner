#include <stdio.h>

int main(void){
  char S[3];
  int ans = 0;

  scanf("%s",S);

  if(S[0] == '1') ans++;
  if(S[1] == '1') ans++;
  if(S[2] == '1') ans++;

  printf("%d\n",ans);
  return 0;
}