#include<stdio.h>
#include<string.h>
int main(){
char s[20];
char t[20];

scanf("%s",s);
scanf("%s",t);

int l,i;
l=strlen(s);

if(s[l-1]==t[l-1]){
  if(t[l]==NULL){
     printf("No");}

  else printf("Yes");}
else printf("No");

return 0;
}