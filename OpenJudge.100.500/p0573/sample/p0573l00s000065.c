#include<stdio.h>
#include<string.h>

int main(){
  int count=0;;
  char s[101];
  scanf("%s",s);
  if(s[0]==s[1]&&s[2]==s[3]&&s[0]!=s[2]){count++;}
  if(s[0]==s[2]&&s[1]==s[3]&&s[0]!=s[1]){count++;}
  if(s[0]==s[3]&&s[1]==s[2]&&s[0]!=s[1]){count++;}
  //printf("%c%c%c%c\n",s[0],s[1],s[2],s[3]);
  if(count==0){printf("%s\n","No");}
  else{printf("%s\n","Yes");}
  return 0;
}