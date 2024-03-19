#include <stdio.h>

int main(void)
{
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double ax, ay, bx, by;
    double cross;

    scanf("%d", &n);

    while(n){
      scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        ax = x1 - x2;
        ay = y1 - y2;
        bx = x3 - x4;
        by = y3 - y4;

        cross = ay/ax - by/bx;
  
        if(cross == 0)
            printf("YES\n");
        else
            printf("NO\n");
	n--;
    }
    return 0;
}