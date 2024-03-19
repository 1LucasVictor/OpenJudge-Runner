#include<stdio.h>
int cnt[26];
int main()
{
    char s[5];
    scanf("%s",s);
    for(int i=0;i<4;++i)
    {
        cnt[s[i]-'A']++;
    }
    int acc = 0;
    for(int i=0;i<26;++i)
    {
        if(cnt[i] == 2)
            acc++;
    }
    if(acc == 2)
    {
        puts("Yes");
    }else
    {
        puts("No");
    }
}