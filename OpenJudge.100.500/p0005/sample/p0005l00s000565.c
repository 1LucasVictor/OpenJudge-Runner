#include<stdio.h>
#include<string.h>
int main(){
char s[30];
int i;
scanf("%s",s);
for(i=strlen(s)-1;i;i--)printf("%c",s[i]);
printf("%c\n",s[0]);
return 0;
}