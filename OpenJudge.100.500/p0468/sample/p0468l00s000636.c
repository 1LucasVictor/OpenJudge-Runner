#include<stdio.h>
int main(void)
{
    char s[3];
    scanf("%s",&s);
    if(s[0]=='A'&&s[1]=='B'&&s[2]=='C'){
        printf("ARC\n");
    }else if(s[0]=='A'&&s[1]=='R'&&s[2]=='C'){
        printf("ABC\n");
    }
    return 0;
}