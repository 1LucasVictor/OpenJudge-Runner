#include <stdio.h>
#include <math.h>

int main()
{
    int j,n,count=0;scanf("%d",&n);long long int d;scanf("%lld",&d);long long int p,x[n][2];
    for(j=0;j<n;j++)
    {
        scanf("%lld",&x[j][0]);scanf("%lld",&x[j][1]);
    }
    for(j=0;j<n;j++)
    {
        p=((x[j][0]*x[j][0])+(x[j][1]*x[j][1]));
        if(p<=(d*d))
        {
            count++;
        }
    }
    printf("%d\n",count);
    return 0;
}
