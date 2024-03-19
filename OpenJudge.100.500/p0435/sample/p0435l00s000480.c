#include <stdio.h>
#include <math.h>

int main(void)
{
    int N, D;
    int count = 0;
    long double tmp;
    long long X[200001],Y[200001];

    scanf("%d %d",&N, &D);
    for(int i=0; i<N; i++){
        scanf("%lld %lld",&X[i],&Y[i]);
    }

    for(int i=0; i<N; i++){
        tmp = X[i]*X[i] + Y[i]*Y[i];
        tmp = sqrt(tmp);
        if(tmp <= D) {
            //printf("i = %d\n",i);
            count++;
        }
    }

    printf("%d\n",count);

    return 0;
}