#include<stdio.h>
int main()
{
    int i,c=0,ara[26]={0};
    char s[5];
    scanf("%s",s);
    for(i=0;i<4;i++)
        ara[s[i]-'A']++;
    for(i=0;i<26;i++)
        if(ara[i]&&ara[i]!=2)
        c++;
    if(c)
        printf("No\n");
    else
        printf("Yes\n");
    return 0;
}
