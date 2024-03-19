#include<stdio.h>
#include<string.h>

int main(){
    char s[15];
    char t[15];

    scanf("%s",s);
    scanf("%s",t);

    if(strlen(s) == (strlen(t) - 1) && strncmp(s,t,strlen(s)) == 0)printf("Yes\n");
    else printf("No\n");


    return 0;
}