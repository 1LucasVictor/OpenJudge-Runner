#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    long long int d,n,c=0;
    scanf("%lld %lld",&n,&d);
    for(int i=0;i<n;i++)
    {
        long long int x,y;
        scanf("%lld %lld",&x,&y);
        if((x*x+y*y)<=d*d)
            c++;
    }
    printf("%d",c);

}
