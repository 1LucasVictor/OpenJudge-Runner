#include<stdio.h>
#include<string.h>
char s[4];
int main(){
    scanf("%s",s);
    if(strcmp(s,"ARC"))puts("ARC");
    else puts("ABC");
    return 0;
}