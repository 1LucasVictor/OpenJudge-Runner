#include <stdio.h>
#include <string.h>
int main() {
  char s[4];
  
  scanf("%s",s);
 
 
  int i=0;
  if ((s[i]=='A' && s[i+1]=='A' && s[i+2]=='A') ||(s[i]=='B' && s[i+1]=='B' && s[i+2]=='B'))
   printf("No");
  else
   printf("Yes");
}
  