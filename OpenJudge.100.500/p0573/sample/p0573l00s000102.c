#include <stdio.h>
#include <stdlib.h>

int main(void){
  int i, ans=0, kind=0, cnt=0;
  char s[10];

  scanf("%s", s);
  if(s[0] == s[1]){
    if(s[2] == s[3]){
      if(s[0] != s[3]) printf("Yes");
      else printf("No");
    }
    else printf("No");
  }
  else if(s[0] == s[2]){
    if(s[1] == s[3]) printf("Yes");
    else printf("No");
  }
  else if(s[0] == s[3]){
    if(s[1] == s[2]) printf("Yes");
    else printf("No");
  }
  else printf("No");


  return 0;
}
