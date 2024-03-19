#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,j,cnt=0,fla=1,flg;
    char s[15],t[15];
    scanf("%s",s);
    scanf("%s",t);
    n=strlen(s);
    i=strlen(t);
    if((i-n)==1)
    {
        for(j=0;j<n;j++)
        {
            if(s[j]!=t[j]){fla=0;break;}
        }
        if(fla) printf("Yes\n");
        else printf("No\n");
    }
    else printf("No\n");
    return 0;
}
