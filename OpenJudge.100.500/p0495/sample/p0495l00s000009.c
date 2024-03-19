#include<stdio.h>
int main()
{
    char s[3];
    int i;
        for(i=0;i<3;i++)
        scanf("%c",&s[i]);
    if(s[0]=='A' && s[1]=='B' && s[2]=='A')
        printf("Yes");
    else if(s[0]=='A' && s[1]=='A' && s[2]=='B')
        printf("Yes");
    else if(s[0]=='B' && s[1]=='A' && s[2]=='A')
        printf("Yes");
    else if(s[0]=='B' && s[1]=='B' && s[2]=='A')
        printf("Yes");
        else if(s[0]=='B' && s[1]=='A' && s[2]=='B')
            printf("Yes");
        else
            printf("No");
        return 0;

}
