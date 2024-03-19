#include<stdio.h>
int main(void){
    int n;
    double x1, x2, x3, x4, y1, y2, y3, y4;
    scanf("%d", &n);
    while ( n ) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );
        x2 -= x1;
        x4 -= x3;
        y2 -= y1;
        y4 -= y3;
        if ( x2 * y4 == y2 * x4 ) printf("YES\n");
        else printf("NO\n");
        n--;
    }
    return 0;
}