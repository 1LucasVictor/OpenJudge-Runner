#include <stdio.h>
int main(void){
  int a,b,c;
  int r = 0;
  char s[101];
  scanf("%s",s);
if( (s[0] == s[1] && s[2] == s[3]) || (s[0] == s[2] && s[1] == s[3]) || (s[0] == s[3] && s[2] == s[1])){
   puts("Yes");
  }else{
   puts("No");
}
return 0;
}