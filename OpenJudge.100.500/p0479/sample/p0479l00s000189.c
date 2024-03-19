#include<stdio.h>

int main()
{
    long long int N,i,a;
    scanf("%lld", &N);
    long long int arr[N];
    for(i=1;i<=N;i++){
        arr[i] = 0;
    }
    for(i=1;i<N;i++){
        scanf("%lld", &a);
        arr[a]++;
    }
    for(a=1;a<=N;a++){
        printf("%lld\n", arr[a]);
    }
    return 0;
}
