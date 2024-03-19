#include <stdio.h>

int main() {
    
    int c, t = 0;
    long long n;
    scanf("%lld", &n);
    int v[200000];
    
    for (int i = 1; i < n; ++i) {
        scanf("%d", &c);
        v[c] += 1;
        
        if (i == n - 1)
            for (int i = 1; i < n+1; ++i)
                printf("%d\n", v[i]);
    }
    

    return 0;
}