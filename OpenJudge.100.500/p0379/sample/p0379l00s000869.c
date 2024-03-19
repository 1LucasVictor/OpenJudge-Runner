#include <stdio.h>
int main(void)
{
    int a,b;
    scanf("%d %d\n",&a,&b);
    int s[a][b], t[b];
    int i,j;
    for (i=0;i<a;i++)
    {
        for(j=0;j<b;j++)
        {
            scanf("%d",&s[i][j]);
        }
    }
    for(j=0;j<b;j++)
    {
        scanf("%d",&t[j]);
    }
    int ans[a];
    for (i=0;i<a;i++)
    {
        ans[i] = 0;
        for (j=0;j<b;j++)
        {
            ans[i] += s[i][j]*t[j];
        }
    }
    for (i=0;i<a;i++)
    {
        printf("%d\n",ans[i]);
    }
    return 0;
}

