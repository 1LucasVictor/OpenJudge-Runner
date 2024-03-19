#include <stdio.h>
#include <math.h>
 
int main () {
 
    int i, j, n, x, c;
    double m;
 
    c = 0;
 
    scanf("%d", &n);
 
    for (i = 1; i <= n; i++) {
 
        scanf("%d", &x);
        m = sqrt(x);
 
        if (x == 2 || x == 3)
            c += 1;
 
        for (j = 2; j <= m + 1; j++) {
 
            if (x % 2 == 0 || x % 5 == 0 || x % j == 0) {
                break;
            } else if (j >= m) {
                c += 1;
                break;
            }
 
        }
 
    }
 
    printf("%d\n", c);
 
    return 0;
 
}
