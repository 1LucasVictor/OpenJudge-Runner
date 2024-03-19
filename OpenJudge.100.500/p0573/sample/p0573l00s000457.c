#include <stdio.h>

int main(){
  char s[4];
  char flag[1]; 
  int ans = 0;
  scanf("%c%c%c%c",&s[0],&s[1],&s[2],&s[3]);
  if(s[0] == s[1] || s[0] == s[2] || s[0] == s[3]){
    ans += 1;
  }
  if(s[1] == s[2] || s[1] == s[3])if(s[1] != s[0])ans+=1;
  if(s[2] == s[3])if(s[2] != s[0] && s[2]!= s[1])ans+=1;
  if(ans == 2) printf("Yes\n");
  else printf("No\n");
  return 0;
}
