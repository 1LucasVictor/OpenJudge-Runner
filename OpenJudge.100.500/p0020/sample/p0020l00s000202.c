#include <stdio.h>

int main(void)
{
    double x[4];
    double y[4];
    double num1, num2;
    int n, i;
    scanf("%d", &n);

    while (n > 0){
        n--;
        for (i = 0; i < 4; i++){
        	scanf("%lf %lf", &x[i], &y[i]);
        	x[i] = ((int)(x[i] * 100000)) / 100000.0;
        	y[i] = ((int)(y[i] * 100000)) / 100000.0;
        }
        
        num1 = (y[1] - y[0]) / (x[1] - x[0]);
        num2 = (y[3] - y[2]) / (x[3] - x[2]);
        
        num1 = ((int)(num1 * 100000)) / 100000.0;
        num2 = ((int)(num2 * 100000)) / 100000.0;
        
        if (num1 == num2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}