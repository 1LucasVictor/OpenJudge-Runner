#include <stdio.h>

struct point {
    double x, y;
};

double slope(struct point a, struct point b)
{
    return (b.y - a.y) / (b.x - a.x);
}

int main(void)
{
    int n;
    struct point p1, p2, p3, p4;

    scanf("%d", &n);
    while (n--) {
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf",
                &p1.x, &p1.y, &p2.x, &p2.y, &p3.x, &p3.y, &p4.x, &p4.y);
        if (slope(p1, p2) == slope(p3, p4))
            printf("YES\n");
        else
            printf("NO\n");
    }
    
    return 0;
}