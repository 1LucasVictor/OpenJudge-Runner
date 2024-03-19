#include <stdio.h>
#include <string.h>
int main(){
 char S[4];
 char s[4]="ABC";
 scanf("%s",S);
 if(strcmp(S,s)==0)printf("ARC");
  else printf("ABC");
 return 0;
}