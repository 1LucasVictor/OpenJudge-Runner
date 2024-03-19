#include<stdio.h>
#include<math.h>
long long int pwo(long long int x,long long int y)
{
    long long int i,a,mod = 1000000000 + 7;
    a = x;
    if(y == 0)
    {
        return 1;
    }
    for(i = 1 ; i < y ; i++)
    {
        x = x*a;
        x = x;
    }
    return x;
}
int main(void)
{
    long long int n,i,j,mod = 1000000000 + 7,sum = 0,x[200001],y[200001],d,count = 0;
    long  double a;
    scanf("%lld %lld",&n,&d);
    for(i = 0 ; i < n ; i++)
    {
        scanf("%lld %lld",&x[i],&y[i]);
        a = pow(x[i] * x[i] + y[i] * y[i],0.5);
        if(a <= d)
        {
            count++;
        }
    }
    printf("%lld\n",count);
    return 0;
}