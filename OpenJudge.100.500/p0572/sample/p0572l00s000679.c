#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <limits.h>
#include <string.h>
#define ll long long int


int main()
{
    ll L, R;
    scanf("%lld %lld",&L,&R);
    ll min=(L*(L+1))%2019;
    for (ll i = L; i<R; i++)
    {
        for (ll j = L; j<i; j++)
        {
          ll res = (i*j)%2019;

          if (res < min) min = res;

          if (min==0)
          {
             printf("0");
             return 0;
          }

        }
    }

    printf("%lld",min);

    return 0;
}
