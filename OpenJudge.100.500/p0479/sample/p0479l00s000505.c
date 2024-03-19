#include<stdio.h>
#include<math.h>
main()
{
    long long int n,a[200005],c,i;char b;
    scanf("%lld",&n);
    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }

    for(;;)
    {
        scanf("%lld",&c);
        a[c]=a[c]+1;
        scanf("%c",&b);
        if(b==10)
            break;
    }
    for(i=1;i<=n;i++)
    {
        printf("%lld\n",a[i]);
    }
}
