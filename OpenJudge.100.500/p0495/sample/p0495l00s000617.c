#include<stdio.h>
int main()
{
  char s[3];
  for(int i=0;i<3;i++){
    scanf("%s",&s[i]);
  }
  (s[0]==s[1]&&s[1]==s[2]) ? puts("No") : puts("Yes");
  return 0;
}