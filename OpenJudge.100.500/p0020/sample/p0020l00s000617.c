#include <stdio.h>
#include <math.h>

const double eps = 1e-10;

int n;
//math.hライブラリでy1, y2...とかって変数名が使われてるらしい
double ix1, ix2, ix3, ix4;
double iy1, iy2, iy3, iy4;

//増加率を見る方法
int solve1() {
    double r1 = (iy2-iy1)/(ix2-ix1);
    double r2 = (iy4-iy3)/(ix4-ix3);
    return (fabs(r1-r2) < eps);
}

int main() {
    scanf("%d", &n);
    for(int i=0; i<n; ++i) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &ix1, &iy1, &ix2, &iy2, &ix3, &iy3, &ix4, &iy4);

        if(solve1()) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
}
