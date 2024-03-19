#include<stdio.h>

int main(){
  char s[4];
  
  for(int i=0;i<4;i++){
    scanf("%c",s[i]);
  }
  
  if(s[0] == s[3] && s[1] == s[2]) printf("Yes");
  else if(s[0] == s[2] && s[1] == s[3]) printf("Yes");
  else printf("No");
  
 

return 0;
}
