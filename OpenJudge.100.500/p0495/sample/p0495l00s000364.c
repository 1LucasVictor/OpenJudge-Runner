#include <stdio.h>
#include <string.h>
int main(void){
 char s[3];
 scanf("%s",s);
 if(s[0]=='A'&&s[1]=='A'&&s[2]=='A') puts("No");
 else if(s[0]=='B'&&s[1]=='B'&&s[2]=='B') puts("No");
 else puts("Yes");
return 0;
}