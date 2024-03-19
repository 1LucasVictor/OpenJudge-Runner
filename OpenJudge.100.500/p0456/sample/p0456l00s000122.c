#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{
    int a,b,ans;
    char s[200000],t[200000];
    scanf("%s %s",s,t);
    a=strlen(s);
    ans=a;

    for(int i=0;i<a;i++)
    {
        if(s[i]==t[i])
        {
            ans=ans-1;
        }
    }


    printf("%d\n",ans);


    return 0;
}