#include <stdio.h>
int main(void){
    int n, i;
    double x[10], y[10], xy;
    scanf("%d", &n);
    for ( i = 0; i < n; i++) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[1], &y[1], &x[2], &y[2], &x[3], &y[3], &x[4], &y[4]);
        if ( ( y[2] - y[1] ) / ( x[2] - x[1] ) ==  ( y[4] - y[3] ) / ( x[4] - x[3] ) ) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}