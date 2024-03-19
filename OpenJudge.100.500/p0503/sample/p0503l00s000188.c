#include<stdio.h>
int main(void)
{
    int n,a[200001],i;
    scanf("%d",&n);
    for(i = 1 ; i <= n ; i++)
    {
        scanf("%d",&a[i]);
    }
    int j;
    for(i = 1 ; i < n ; i++)
    {
        for(j = i+1 ; j <= n ; j++)
        {
            if(a[i] == a[j])
            {
                printf("NO\n");
                return 0;
            }
        }
    }
    printf("YES\n");
    return 0;
}