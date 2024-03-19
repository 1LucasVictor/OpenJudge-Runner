#include <stdio.h>

int main(void)
{
    long long int H,N,A[100001],sum=0;
    int i;

    scanf("%lld %lld",&H,&N);

    for(i=0; i<N; i++){
        scanf("%lld",&A[i]);
    }

    for(i=0; i<N; i++){
        sum+=A[i];
        if(sum >= H){
            printf("Yes\n");
            return 0;
        }
    }

    printf("No\n");
    return 0;
}
