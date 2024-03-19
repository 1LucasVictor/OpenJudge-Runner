#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    long n,m;
    int flag=0;
    scanf("%ld %ld", &n,&m);

    long s[m],c[m];
    for(int i=0;i<m;i++)
    {
        scanf("%ld %ld",&s[i],&c[i]);
    }

    long ans[3];
    for(int i=0;i<3;i++)
    {
        ans[i]=-1;
    }

    for(int i=0;i<m;i++)
    {
        if(ans[s[i]-1]==-1)
        {
            ans[s[i]-1]=c[i];
        }
        else if(ans[s[i]-1]!=c[i])
        {
            ans[s[i]-1]=-2;
        }
    }

    if(ans[0]==0)
    {
        flag=1;
    }
    for(int i=0;i<3;i++)
    {
        if(ans[i]==-2)
        {
            flag=1;
        }
        else if(i==0&&ans[i]==-1)
        {
            ans[i]=1;
        }
        else if(ans[i]==-1)
        {
            ans[i]=0;
        }
    }

    if(flag==0&&n==3)
    {
        printf("%ld",ans[0]*100+ans[1]*10+ans[2]);
    }
    else if(flag==0&&n==2)
    {
        printf("%ld",ans[0]*10+ans[1]);
    }
    else if(flag==0&&n==1)
    {
        printf("%ld",ans[0]);
    }
    else
    {
        printf("-1");
    }

    
    return 0;
}