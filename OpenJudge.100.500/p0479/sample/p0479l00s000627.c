#include <stdio.h>

int main() {
    
    int n, c, t = 0;
    scanf("%d", &n);
    int v[n*2];
    
    for (int i = 1; i < n+1; ++i)
        v[i] = 0;
    
    for (int i = 1; i < n; ++i) {
        scanf("%d", &c);
        v[c] += 1;
    }
    
    for (int i = 1; i < n+1; ++i)
        printf("%d\n", v[i]);

    return 0;
}