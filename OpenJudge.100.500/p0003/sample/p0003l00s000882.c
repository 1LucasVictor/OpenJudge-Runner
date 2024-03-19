#include <stdio.h>

int main(){
    int a, b, c, d, s, t;
    double x, y, det;
    while(scanf("%d %d %d %d %d %d", &a, &b, &s, &c, &d, &t) != EOF){
        det = a * d - b * c;
        x = (s * d + t * (-b)) / det;
        y = (s * (-c) + t * a) / det;
        x = x == 0 ? 0 : x;
        y = y == 0 ? 0 : y;
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}