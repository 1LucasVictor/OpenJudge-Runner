#include<stdio.h>
int main(){
  int a[26] = {0}, ans = 0;
  char s[5];
  scanf("%s", s);
  for(int i = 0; i < 4; ++i){
    a[s[i] - 65]++;
  }
  for(int i = 0; i < 26; ++i){
    
    if(a[i]) ans++;
  }
  if(ans == 2) puts("Yes");
  else puts("No");
  return 0;
}