#include<stdio.h>
#include<math.h>
#include<stdlib.h>

int main(void)
{
    long long int N, K, t, k;
    int flag=0;

    scanf("%lld", &N);
    scanf("%lld", &K);

    N %= K;

    while(flag == 0) {
        N = llabs(N - K);
        t = N;
        N = llabs(N - K);
        k = N;
        N = llabs(N - K);
        if(N == t || N == k) {
            if(t < k) {
                printf("%lld\n", t);
            } else {
                printf("%lld\n", k);
            }
            break;
        }
    }

    return 0;
}
