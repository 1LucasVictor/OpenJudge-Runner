#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
 char s[10],t[11];
 scanf("%s %s",s,t);
 int len=strlen(s);
 if(strlen(t)==len+1)puts("Yes");
 else puts("No");
return 0;}