#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){
  char s[11],t[12];
  scanf("%s",s);
  scanf("%s",t);
  if(strncmp(s,t,strlen(s)) == 0) printf("Yes");
  else printf("No");
}