#include<stdio.h>
#include<string.h>
int main()
{
    char s[100],t[100];
    int i,c=0,len=0;
    scanf("%s",&s);
    scanf("%s",&t);
    len=strlen(s);
    for(i=0;i<len;i++){
        if(s[i]!=t[i])
        c++;
    }
    printf("%d\n",c);
    return 0;
}