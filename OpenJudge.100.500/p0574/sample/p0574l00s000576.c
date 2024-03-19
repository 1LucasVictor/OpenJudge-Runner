#include<stdio.h>
int main(){
  char s[5];
  int c,i;
  scanf("%s",s);
  for(i=0;i<3;i++){if(s[i]==s[i+1]) c = 1;}
  if(c == 1) printf("Bad");
  else printf("Good");
}