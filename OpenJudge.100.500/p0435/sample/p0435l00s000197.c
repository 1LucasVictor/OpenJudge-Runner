#include<stdio.h>
#include<math.h>

int main(void)
{
    int N, D, i, c=0;
    long double t;

    scanf("%d %d", &N, &D);
    long long X[N], Y[N];
    for(i=0; i<N; i++) {
        scanf("%lld %lld", &X[i], &Y[i]);
    }

    for(i=0; i<N; i++) {
        t = sqrt(X[i]*X[i] + Y[i]*Y[i]);
        if(t <= D) {
            c++;
        }
    }

    printf("%d\n", c);

    return 0;
}