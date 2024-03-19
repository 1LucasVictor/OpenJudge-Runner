#include <stdio.h>
#include <math.h>

int main()
{
    int n,m,s[5],c[5],ans[3],anser = 0;

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
    else
    {
        for (i = 0; i < n; i++)
        {
            anser += (ans[i] % 10) * pow(10,n - i - 1);
        }
        printf("%d",anser);
    }
    
}
