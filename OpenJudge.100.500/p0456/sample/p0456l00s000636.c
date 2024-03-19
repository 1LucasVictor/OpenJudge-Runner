#include <stdio.h>
#include <string.h>
int str_length(const char s[]) {
  int len = 0;
  
  while (s[len])
    len++;
  return len;
}

int main(void){
  char S[200000];
  char T[200000];

  scanf("%s%s", S, T);
  

  int n = str_length(S);
  int wa = 0;
  for(int i = 0; i < n; i++) {
    if(S[i] == T[i]){ wa++; }
  }
  printf("%d", n - wa);
  return 0;
}