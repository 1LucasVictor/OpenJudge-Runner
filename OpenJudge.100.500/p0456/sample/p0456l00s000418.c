#include<stdio.h>
int main()
{
    char s[10000],S;
    int l,i,count=0;
    scanf("%s",&s);
    l=strlen(s);
    for(i=0;i<l;i++)
    {
        scanf(" %c",&S);
        if(S!=s[i])
            count++;
    }printf("%d\n",count);
    return 0;

}
