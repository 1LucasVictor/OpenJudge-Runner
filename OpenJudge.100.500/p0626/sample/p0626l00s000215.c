#include<stdio.h>
int main()
{
    long long int d,n;
    while(scanf("%lld %lld",&d,&n)==2)
    {
        long long int c=100,p=0,i;
        if(d==0)
        {
            printf("%lld\n",n);
        }
        else if(d==1)
        {
            p=n*100;
            printf("%lld\n",p);
        }
        else
        {
            for(i=2;i<=d;i++)
            {
                c=c*100;
            }
            p=(c*n);
            printf("%lld\n",p);
        }
    }
    return 0;
}
