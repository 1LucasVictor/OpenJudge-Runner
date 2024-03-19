#include<stdio.h>
#include<string.h>
i;
int main(void){
    char s[21]="";
    scanf("%s",s);
    i=strlen(s);
    for(;i--;)
    printf("%c",s[i]);
    puts("");
}