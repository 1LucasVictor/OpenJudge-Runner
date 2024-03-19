#include<stdio.h>
int main()
{
    long long int d,n;
    scanf("%lld %lld",&d,&n);
    {
        long long int c=100,p=0,i;
        if(d==0 && n%100!=0)
        {
            printf("%lld\n",n);

        }
        if(d==0 && n%100==0)
        {
            printf("%lld\n",n+1);
        }
        else if(d==1)
        {
            p=n*100;
            printf("%lld\n",p);
        }
        else if(d==2)
        {
            p=n*10000;
            printf("%lld\n",p);
        }

    return 0;
}

}
