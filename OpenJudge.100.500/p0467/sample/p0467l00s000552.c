#include<stdio.h>
#include<string.h>
int main()
{
    long long int a,b,n=0,h,w,j,i,k,c=0;

    scanf("%lld%lld%lld%lld",&a,&b,&c,&k);
    if(a>=k){printf("%lld\n",a);}
    else
    {   n=k-a;
        if(n<=b){printf("%lld\n",a);}
        else
        {
            n=n-b;
            if(n<=c){printf("%lld\n",a-n);}
            else{printf("%lld\n",a-c);}
        }
    }

    return 0;
}
