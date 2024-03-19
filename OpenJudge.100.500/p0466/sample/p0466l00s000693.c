#include<stdio.h>
#include<string.h>
int main()
{
    char s[1234],s1[1234];
    int i,cnt=0,l1,l2,cnt1=0,j;
    scanf("%s\n %s",s,s1);
    l1 = strlen(s);
    l2 = strlen(s1);
    for(i=0; i<l2; i++)
    {
        if(s[i]==s1[i])cnt++;

    }
    for(i=l1,j=l2; i>=0; i--,j--)
    {
        if(s[i]==s1[j])cnt1++;
        else break;
    }
    if(cnt==l1 && cnt1==1)printf("Yes\n");
    else printf("No\n");
    return 0;

}
