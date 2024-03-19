#include <stdio.h>

int main()
{
    int m = 0, n, max = -100000000, min2, min1, x = -1000000000, y = -1, i, j = 0, k , l = -100000000;
    int s[200000] = {0};
    
    scanf ("%d", &n);
    
    for (i = 0; i < n; i++) {
        scanf("%d", &s[i]);
    }
    
    min1 = s[0];
    min2 = s[0];
    
    for (i = 0; i < n; i++) {
        if (s[i] < min1) {
            min2 = min1;
            min1 = s[i];
            k = min1 - min2;
            if (k > l) {
                l = k;
            }
            m = i;
            max = min1;
            for ( j = m + 1; j < n; j++) {
                if (max < s[j]) {
                    max = s[j];
                }
                y = max - min1;
            }
            if (y > x) {
                x = y;
            }
        }
    }
    
    if (m == j - 1) {
        x = l;
    }
    
    printf ("%d\n", x);
    
    return 0;
}