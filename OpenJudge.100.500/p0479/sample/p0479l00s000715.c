#include<stdio.h>
#define sz 200001
int main()
{
    long long int n;

    while(scanf("%lld",&n)!=EOF)
    {
        int a[sz] = {0};
        long long int i,pos=0;
        for(i=1;i<n;i++)
        {
            scanf("%lld",&pos);
            ++a[pos];
        }

        for(i=1;i<=n;i++)
            printf("%d\n",a[i]);
    }
}
