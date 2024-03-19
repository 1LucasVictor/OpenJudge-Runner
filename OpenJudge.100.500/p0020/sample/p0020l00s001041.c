#include <stdio.h>

int main()
{
    double x[4], y[4], dABdx, dCDdx;
    int n, i;
    
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
            &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]);
        
        if (x[0] == x[1] && x[2] == x[3]) {
            printf("YES\n");
            continue;
        } else if (x[0] == x[1] || x[2] == x[3]) {
            printf("No\n");
            continue;
        }
        
        dABdx = (y[0] - y[1]) / (x[0] - x[1]);
        dCDdx = (y[2] - y[3]) / (x[2] - x[3]);
        
        if (dABdx == dCDdx) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    
    return 0;
}