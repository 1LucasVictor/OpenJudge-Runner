#include <stdio.h>
int main(void){
  char s[10];
  scanf("%s",s);
if( (s[0] == s[1] && s[2] == s[3]) || (s[0] == s[2] && s[1] == s[3]) || (s[0] == s[3] && s[2] == s[1])){
   puts("Yes\n");
  }else{
   puts("No\n");
}
return 0;
}