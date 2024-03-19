#include <stdio.h>

int main(void)
{
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double ax, ay, bx, by;
    double cross;

    do{
      scanf("%d", &n);
    }while(n >= 100 || -100 >= n);

    while(n){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);

        ax = x2 - x1; 
        ay = y2 - y1;
        bx = x4 - x3;
        by = y4 - y3;

        cross = ax * by - ay * bx;
  
        if(cross == 0)
            printf("YES\n");
        else
            printf("NO\n");
	n--;
    }
    return 0;
}