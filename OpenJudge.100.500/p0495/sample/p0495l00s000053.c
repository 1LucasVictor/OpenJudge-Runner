#include<stdio.h>
int main(){
  int i;
  char s[3];
  for(i=0;i<3;i++)
    scanf("%c",&s[i]);
  if(s[0]==s[1] && s[1]==s[2])
    printf("No\n");
  else
    printf("Yes\n");
  return 0;
}