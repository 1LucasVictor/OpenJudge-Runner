#include <stdio.h>

int main(void){

    long long int N;
    scanf("%lld", &N);
    long long int A[N];
    long long int a[N];
    int i;
    
    for (i = 0; i < N; i++)
        a[i] = 0;
    for (i = 0; i < N - 1; i++)
        scanf("%lld ", A + i);
    for (i = 0; i < N - 1; i++)
        a[A[i] - 1]++;
    for (i = 0; i < N; i++)
        printf("%lld\n", a[i]);
    return (0);
}