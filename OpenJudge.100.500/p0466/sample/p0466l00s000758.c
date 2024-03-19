#include<stdio.h>
#include<string.h>
int main()
{
    char s[11];
    char t[12];
    scanf("%s%s",&s,&t);
    int l=strlen(s);
    int c=0;
    for(int i=0;i<l;i++)
    {
        if(s[i]==t[i]){c++;}
    }
    if(c==l){printf("Yes");}
    else printf("No");
    return 0;
}