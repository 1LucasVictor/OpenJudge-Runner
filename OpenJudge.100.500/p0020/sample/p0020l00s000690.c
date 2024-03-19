#include<stdio.h>
int main(){
    int n;
    double x1, x2, x3, x4, y1, y2, y3, y4, XAB, XCD, YAB, YCD;
    scanf("%d", &n);
    while ( n-- ) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4 );
        XAB = x2 - x1;
        XCD = x4 - x3;
        YAB = y2 - y1;
        YCD = y4 - y3;
        if ( XAB * YCD == XCD * YAB ) puts("YES");
        else puts("NO");
    }
    return 0;
}