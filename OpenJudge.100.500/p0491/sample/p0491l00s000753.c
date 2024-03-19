#include <stdio.h>
#include <stdlib.h>

int main(void) {
        long long int n, k;
        scanf("%lld %lld",&n,&k);

        if( (n = n%k) > llabs(n -k))
                printf("%lld\n",llabs(n-k));
        else
                printf("%lld\n",n);

        return 0;
}