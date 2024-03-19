#include <stdio.h>
int main(void){
  char s[100],t[100];
  scanf("%s",s);
  scanf("%s",t);
  int i;
  for(i=0;i<strlen(s);i++)
    if(s[i]!=t[i]) break;
  if(i==strlen(s))
    printf("Yes");
  else
    printf("No");
  return 0;
}