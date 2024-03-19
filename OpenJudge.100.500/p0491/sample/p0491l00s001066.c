#include<stdio.h>
#include<stdlib.h>
int main ()
{
    long long int n,k,dif,dif1;
    scanf ("%lld%lld",&n,&k);
    long long int res;
    if (n <= 0 || k <=0)
      {
            res = n;
      }

    else if (n%k ==0)
        res = 0;
    else
    {
        if (n>k)
            {
            n = n%k;

            dif = abs(n - k);
            if (n>dif)
                res = dif;
            else res = n;
            }
        else {
        dif = abs(n-k);
        if (dif >n)
        res = n;
        else res = dif;
        }
    }
    printf ("%lld\n",res);
    return 0;
}
