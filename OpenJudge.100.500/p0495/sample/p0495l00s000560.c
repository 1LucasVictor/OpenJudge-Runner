#include <stdio.h>

int main(){
    char s[5];



    scanf("%s",s);

    if((s[0]=='A') && (s[1]!='A') && (s[2]=='A'))
        printf("Yes\n");
    if((s[0]!='A') && (s[1]=='A') && (s[2]=='A'))
        printf("Yes\n");
    if((s[0]!='A') && (s[1]=='A') && (s[2]=='A'))
        printf("Yes\n");
    else if((s[0]=='B') && (s[1]!='B') && (s[2]!='B'))
        printf("Yes\n");
    else if((s[0]!='B') && (s[1]=='B') && (s[2]=='B'))
        printf("Yes\n");
    else if((s[0]=='B') && (s[1]!='B') && (s[2]=='B'))
        printf("Yes\n");


    else if(((s[0]=='B')&& (s[1]=='B') && (s[2]=='B'))||((s[0]=='A') && (s[1]=='A') && (s[2]=='A')))
            printf("No\n");

    return 0;
}