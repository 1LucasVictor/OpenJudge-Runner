#include<stdio.h>
#include<string.h>

int main(){
    char s[10],t[11];
    scanf("%s %s",s,t);

    if(strlen(s) == (strlen(t) - 1) && strncmp(s,t,strlen(s)-1) == 0)printf("Yes\n");
    else printf("No\n");

    return 0;
}