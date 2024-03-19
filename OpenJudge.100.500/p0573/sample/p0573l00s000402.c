#include <stdio.h>
#include <stdlib.h>
int main(){
  int i,c=0,a,v=0,b;
  char s[4];
   scanf("%s",&s);
  
  if((s[0]==s[1]&&s[2]==s[3]&&s[0]!=s[2])
     ||(s[0]==s[2]&&s[1]==s[3]&&s[0]!=s[1])
     ||(s[0]==s[3]&&s[1]==s[2]&&s[0]!=s[1]))
    printf("Yes");
  /*else if(s[0]==s[1]==s[2]==s[3])
    printf("No");*/
  else
    printf("No");
}