#include <stdio.h>
#include <stdlib.h>

int main(void) {
        long long int n, k;
        scanf("%lld %lld",&n,&k);

        if( (n = n%k) > abs(n -k))
                printf("%d\n",abs(n-k));
        else
                printf("%lld\n",n);

        return 0;
}