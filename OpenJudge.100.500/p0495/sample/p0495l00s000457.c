#include <stdio.h>

#define MAX 3

int main()
{
 	char s[MAX+1];
  
  	scanf("%s",s);
  
  if(s[0]==s[1] && s[1]==s[2])
    printf("No\n");
  else
    printf("Yes\n");
  
  return 0;
}