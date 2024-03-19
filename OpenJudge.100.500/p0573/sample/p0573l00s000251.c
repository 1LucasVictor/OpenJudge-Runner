#include <stdio.h>
int main(void){
  char s[128];
  int a;
  if(scanf("%s",s) == 1){};
  if(s[0] == 0 || s[1]  == 0 || s[2] == 0|| s[3] ==0){puts("No");return 0;}
  if(s[0] == s[1] && s[0] == s[1] && s[0] == s[2])   {puts("No");return 0;}
if( (s[0] == s[1] && s[2] == s[3]) || (s[0] == s[2] && s[1] == s[3]) || (s[0] == s[3] && s[2] == s[1])){
   puts("Yes");
  }else{
   puts("No");
}
return 0;
}
  
