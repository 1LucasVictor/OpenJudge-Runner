#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    int num=0;
    char s[11]={},t[11]={};
    scanf("%s%s",s,t);
    while (s[num]!='\0') num++;
    if (strncmp(s, t, num)==0) printf("Yes");
    else printf("No");
    return 0;
}


