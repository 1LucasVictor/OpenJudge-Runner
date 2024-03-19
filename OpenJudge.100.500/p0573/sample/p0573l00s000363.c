#include<stdio.h>
int main(){
  char s[5];
  scanf("%s",s);
  int ans=0;
  if(s[0]==s[1]){if(s[1]!=s[2]&&s[2]==s[3])ans=1;}
  else if(s[0]==s[2]){if(s[1]==s[3]&&s[0]!=s[1])ans=1;}
  else if(s[0]==s[3]){if(s[1]==s[2]&&s[0]!=s[1])ans=1;}
  puts(ans?"Yes":"No");
}