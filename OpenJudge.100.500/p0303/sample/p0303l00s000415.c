#include<stdio.h>
#include<stdlib.h>
int solve(int, int, int, int*);
int check(int, int, int, int*);
main()
{
        int i, n, k, p = 0, *w;
        scanf("%d %d", &n , &k);
        w = (int *)malloc(sizeof(int) * n);
        for (i = 0; i < n; i++) {
                scanf("%d", &w[i]);
                if (p < w[i]) {
                        p = w[i];
                }
        }

        printf("%d\n", solve(n, k, p, w));
        free(w);
}
int solve(int n, int k, int p, int *w)
{
        int i, mid, left = 1, right = n * p;
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
int check(int n, int k, int p, int *w)
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