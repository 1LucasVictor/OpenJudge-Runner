#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,s[5],c[5],ans[3];

    ans[0] = 10;ans[1] = 10;ans[2] = 10; 

    scanf("%d %d",&n,&m);

    int i,j;
    for (i = 0; i < m; i++)
    {
        scanf("%d %d",&s[i],&c[i]);
    }

    for (i = 0; i < m; i++)
    {
        if(ans[s[i] - 1] == 10 || ans[s[i] - 1] == c[i])
        {
            ans[s[i] - 1] = c[i];
        }
        else
        {
            break;
        }
    }
    

    if(i != m)printf("-1");
    else if(n == 1 && ans[0] == 0)
    {
        printf("0");
    }
    else if(ans[0] != 0)
    {
        if(ans[0] == 10)ans[0] = 1;
        for (i = 0; i < n; i++)
        {
            printf("%d",ans[i] % 10);
        }
    }
    else
    {
        printf("-1");
    }
    
    
}
