#include<stdio.h>
int main(void)
{
    char s[20001],t[20001];
    int i=0,ans=0;
    scanf("%s%s",s,t);
    while(s[i]!='\0'){
        if(s[i]!=t[i])
            ans++;
        i++;
    }
    printf("%d\n",ans);
    return 0;
}