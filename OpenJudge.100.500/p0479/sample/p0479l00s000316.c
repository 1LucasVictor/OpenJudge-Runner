#include <stdio.h>
#define sz 300000
int main()
{
    long long int n,i,x;
    int a[sz];

    scanf("%lld",&n);

    for( i=1 ; i<n ; i++ )
    {
        scanf("%lld",&x);
        a[x-1]++;
    }
    for( i=0 ; i<n ; i++ )
        printf("%d\n",a[i]);
    return 0;
}

