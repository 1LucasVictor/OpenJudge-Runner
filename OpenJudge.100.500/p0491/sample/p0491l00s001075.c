#include<stdio.h>
#include<stdlib.h>
int main ()
{
    long long int n,k,dif;
    scanf ("%lld%lld",&n,&k);
    long long int res;
        if (n>k)
            {
            n = n%k;
            dif = k - n;
            if (n>dif)
                res = dif;
            else res = n;
            }
        else {
        dif = k-n;
        if (dif >n)
        res = n;
        else res = dif;
        }
    printf ("%lld\n",res);
    return 0;
}
