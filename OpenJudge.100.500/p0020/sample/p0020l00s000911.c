#include <stdio.h>

int main(void)
{
    double x[4];
    double y[4];
    double num1, num2;
    int n;
    scanf("%d", &n);

    while (n > 0){
        n--;
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x[0], &y[0], &x[1], &y[1], &x[2], &y[2], &x[3], &y[3]);
        
        num1 = (y[0] - y[1]) / (x[0] - x[1]);
        num2 = (y[2] - y[3]) / (x[2] - x[3]);
        
        if (num1 == num2 &&((x[0] - x[1] != 0) && (x[2] - x[3] != 0))){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}