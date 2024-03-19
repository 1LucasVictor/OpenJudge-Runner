#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
typedef long long ll;

int main()
{

    char s[11],t[12];
    scanf("%s %s",s,t);

    int n;
    n=strlen(s);

    int flag=0;

    for(int i=0;i<n;i++)
    {
        if(s[i]!=t[i])
        {
            flag=1;
        }
    }

    if(flag==0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }


    return 0;
}