#include<stdio.h>
int main(){
  char s[3];
  scanf("%s",s);
  printf("%s\n",s[0]==s[1]&&s[0]==s[2]?"No":"Yes");
  return 0;
}