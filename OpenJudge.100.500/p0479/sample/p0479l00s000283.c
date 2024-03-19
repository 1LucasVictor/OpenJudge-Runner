#include <stdio.h>
#define sz 200000
int main()
{
    int n,i,x,a[sz];

    scanf("%d",&n);

    for( i=1 ; i<n ; i++ )
    {
        scanf("%d",&x);
        a[x-1]++;
    }
    for( i=0 ; i<n ; i++ )
        printf("%d\n",a[i]);
    return 0;
}

