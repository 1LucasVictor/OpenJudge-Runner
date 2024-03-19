#include<stdio.h>

int main(void)
{
    int n,m,s[10],c[10],a = 0,b = 0,d = 0;
    scanf("%d %d",&n,&m);
    int i,j;
    
    for(i = 1;i <= m ; i++)
    {
        scanf("%d %d",&s[i],&c[i]);
    }
    for(i = 1 ; i < m ;i++)
    {
        for(j = i+1;j <= m ; j++ )
        {
            if(s[i] == s[j] && c[i] != c[j])
            {
                printf("-1");
                
                return 0;
            }
        }
    }
    for(i = 1 ; i <= m ; i++)
    {
        if(s[i] == 1 )
        {
            a = c[i];
        }
        if(s[i] == 2)
        {
            b = c[i];

        }
        if(s[i] == 3)
        {
            d = c[i];
        }

    }
    int x;
    x = 100*a+10*b+d;
    i = x;
    int count = 0;
    while(i > 0)
    {
        i = i / 10;
        count++;
    }
    if(count == n)
    {
        printf("%d",x);
    }
    else
    {
        printf("-1");
    }
    
    return 0;
}