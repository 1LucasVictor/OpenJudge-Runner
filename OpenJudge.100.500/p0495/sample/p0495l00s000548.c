#include<stdio.h>
int main()
{
    char s[3];
    scanf("%[^\n]",s);
    if(s[0]==s[2] && s[0]!=s[1])
        printf("Yes\n");
    else if(s[0]==s[1] && s[0]!=s[2])
        printf("Yes\n");
    else
printf("No\n");
    return 0;

}
