#include<stdio.h>
int main()
{
    int h, n,i,th,s;
    scanf("%d%d", &h, &n);
    th= n;
    for(i=1;i<=n;i++)
    {
        scanf("%d", &s);
        th -= s;
    }
    if(th <= 0)
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
