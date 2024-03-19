#include<stdio.h>

int main(void) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);
    
    int a[n];
    for (int i = 0; i < n; i++) {
        int x;
        scanf("%d", &x);
        if (i == 0) {
            a[0] = x;
        } else {
            a[i] = a[i - 1] + x;
        }
    }
    
    int b[m];
    for (int i = 0; i < m; i++) {
        int x;
        scanf("%d", &x);
        if (i == 0) {
            b[0] = x;
        } else {
            b[i] = b[i - 1] + x;
        }
    }
    
    int ans = 0;
    int i, j;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            if (a[i] > k - b[j]) {
                break;
            }
        }
        if (i + j + 1> ans) {
            ans = i + j + 1;
        }
        
        if (j == 0) {
            break;
        }
    }
    
    printf("%d\n", ans);
    
    return 0;
}