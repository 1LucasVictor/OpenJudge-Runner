#include<stdio.h>
#include<stdlib.h>
long long int solve(long long int, long long int, long long int, long long int*);
long long int check(long long int, long long int, long long int, long long int*);
main()
{
        long long int i, n, k, p = 0, w[100000];
        scanf("%lld %lld", &n , &k);
        //w = (long long int *)malloc(sizeof(long long int) * n);
        for (i = 0; i < n; i++) {
                scanf("%lld", &w[i]);
                if (p < w[i]) {
                        p = w[i];
                }
        }

        printf("%lld\n", solve(n, k, p, w));
}
long long int solve(long long int n, long long int k, long long int p, long long int *w)
{
        long long int i, mid, left = 1, right = n * p;
        while (left <= right ) {
                mid = (left + right) / 2;
                if(check(n, k, mid, w) >= n) {
                        right = mid - 1;
                } else {
                        left = mid + 1;
                }
        }
        return left;
}
long long int check(long long int n, long long int k, long long int p, long long int *w)
{
        int i, j = 0;
        for (i = 0; i < k; i++) {
                int s = 0;
                while (s + w[j] <= p) {
                        s += w[j++];
                }
                if (j == n) {
                        break;
                }
        }
        return j;
}