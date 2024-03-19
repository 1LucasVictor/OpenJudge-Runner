#include<stdio.h>
#include<string.h>
int main()
{
    int i,count,j=0,s1=0,k;
    char s[5];
    scanf("%s", s);
    for(i=j;i<3;i++)
    {
        count=0;
        for(k=i+1;k<4;k++)
        {
            if(s[i]==s[k])count=1;
        }
        j++;
        s1=s1+count;
    }
    if(s1==2)printf("Yes\n");
    else printf("No\n");
    return 0;
}
