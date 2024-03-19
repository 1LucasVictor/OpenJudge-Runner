#include<stdio.h>
#include<ctype.h>
int main(){
char ch;
while(1){
scanf("%c",&ch);
if(ch=='\n') break; else if('A'<=ch && 'Z'>=ch) printf("%c",tolower(ch)); else if('a'<=ch && 'z'>=ch) printf("%c",toupper(ch));else printf("%c",ch);
}
printf("\n");
return 0;
}