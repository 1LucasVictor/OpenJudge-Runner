#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define f(i, q) for(int i = 0; i < q; i++)  

typedef long long ll;

#define SIZE 200001
#define MAX 1000000001

// 昇順にソート
int asc_comp(const void* a, const void* b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    return x - y;
}
// 降順にソート
int dec_comp(const void* a, const void* b){
    ll x = *(ll*)a;
    ll y = *(ll*)b;
    return y - x;
}

int main() {
    // qsort(in, a, sizeof(ll), dec_comp);
    ll N, M, K;
    ll A[SIZE], B[SIZE];
    scanf("%lld %lld %lld", &N, &M, &K);
    for (ll i = 0; i < N; i++) {
        scanf("%lld", &A[i]);
    }
    for (ll i = 0; i < M; i++) {
        scanf("%lld", &B[i]);
    }

    ll i, j, remain, sum;
    i = j = remain = sum = 0;
    A[N] = B[M] = MAX;

    do {
        if (A[i] > B[j]) {
            if (remain + B[j] <= K) {
                remain += B[j];
                j++;
                sum++;
            } else {
                break;
            }
        } else {
            if (remain + A[i] <= K) {
                remain += A[i];
                i++;
                sum++;
            } else {
                break;
            }
        }
    } while( remain <= K );
    printf("%lld\n", sum);
    return 0;
}
