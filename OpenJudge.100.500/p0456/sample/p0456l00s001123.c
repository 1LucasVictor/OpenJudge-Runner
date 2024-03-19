#include<stdio.h>
int main()
{
    char s[100000],S[100000];
    int l,i,count=0;
    scanf("%s",&s);
    scanf("%s",&S);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(S[i]!=s[i])
            count++;
    }printf("%d\n",count);
    return 0;

}
