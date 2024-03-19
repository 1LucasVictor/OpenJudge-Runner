#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
 char s[10],t[11];
 scanf("%s %s",s,t);
 int len1=strlen(s);
 int len2=strlen(t);
 int a;
 for(a=0;a<len1;a++)
   if(s[a]!=t[a]){
     puts("No");return 0;}
 if(len2==len1+1)puts("Yes");
 else puts("No");
return 0;}