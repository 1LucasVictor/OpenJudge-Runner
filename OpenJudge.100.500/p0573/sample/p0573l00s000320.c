#include<stdio.h>
int main()
{
   char s[5];
   scanf("%s",&s);
  if(s[0]==s[1] && s[2]==s[3])
    printf("Yes");
  else if(s[0]==s[3] && s[2]==s[1])
    printf("Yes");
     else if(s[0]==s[2] && s[1]==s[3])
    printf("Yes");
  else
    printf("No");
    return 0;
}