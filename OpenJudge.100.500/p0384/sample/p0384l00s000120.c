#include<stdio.h>
#include<string.h>
int main(){
char ch;
while(1){
scanf("%c",&ch);
if(ch=='\n'){
printf("\n");
break;
}
if(ch>='a' && ch<='z') printf("%c",toupper(ch));
else if(ch>='A' && ch<='Z') printf("%c",tolower(ch));
else printf("%c",ch);
}
return 0;
}