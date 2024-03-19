#include <stdio.h>

int main()
{
    int n, x, i, j, k, ans;
    while(1) {
        scanf("%d%d", &n, &x);
        ans=0;
        if(n==0 && x==0) break;
        for(i=1; i<n-1; i++) {
            for(j=i+1; j<n; j++) {
                k=x-i-j;
                if(j<k && k<=n) ans++;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}