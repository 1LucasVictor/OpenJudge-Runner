#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],s1[100];
    int i,cnt=0,l1,l2;
    scanf("%s\n %s",s,s1);
    l1 = strlen(s);
    l2 = strlen(s1);
    for(i=0; i<l1; i++)
    {
        if(s[i]==s1[i])cnt++;

    }
    if(cnt==l1 )printf("Yes\n");
    else printf("No\n");
    return 0;

}
