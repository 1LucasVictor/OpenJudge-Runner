#include<stdio.h>
int main(){
  char s[5];
  scanf("%s",s);
  int a=0;
  if(s[0]==s[1]||s[1]==s[2]||s[2]==s[3])a=1;
  puts(a?"Bad":"Good");
}