#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
  char s[5], sum = 0;
  int k[26] = {0};
  scanf("%s", s);
  for(int j = 0; j < 4; ++j){
    for(int i = 0; i < 26; ++i){
      if(s[j] == i + 65){
        if(k[i] == 0) sum++;
        k[i]++;
      }
    }
  }
  if(sum == 2) puts("Yes");
  else puts("No");
  return 0;
}