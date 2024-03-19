#include<stdio.h>

int main(void)
{
    int i, j, k;
    int n, x, cnt;
    
    while (1) {
        cnt = 0;
        scanf("%d %d", &n, &x);
        
        if ( n == 0 && x == 0)
            break;
        for ( i=1; i<=n; ++i)
            for ( j=i+1; (k = x-i-j) > j; ++j) {
                if ( k <= n)
                    ++cnt;
            }
        printf("%d\n", cnt);
    }
    
    return 0;
}
