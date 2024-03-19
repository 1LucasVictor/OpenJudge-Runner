#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define ll long long int

int compare_int(const void *a, const void *b)
{
    return *(int*)a - *(int*)b;
}

int main(void) {
    ll n, m, k;
    scanf("%lld%lld%lld", &n, &m, &k);
    
    ll a[400100];
    for(int i = 0; i < n+m; i++) {
        scanf("%lld", &a[i]);
    }
    
    qsort(a, n+m, sizeof(ll), compare_int);
    
    ll count = 0;
    ll sum = 0;
    for(int i = 0; i < n+m; i++) {
        sum += a[i];
        if(sum > k) break;
        count++;
    }
    
    printf("%lld\n", count);
    return 0;
}
