#include <stdio.h>

int main(void)
{
    float x[4];
    float y[4];
    float num1, num2;
    int n, i;
    scanf("%d", &n);

    while (n > 0){
        n--;
        for (i = 0; i < 4; i++){
        	scanf("%f %f", &x[i], &y[i]);
        }
        
        num1 = (y[1] - y[0]) / (x[1] - x[0]);
        num2 = (y[3] - y[2]) / (x[3] - x[2]);
        
        if (num1 == num2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }

    return 0;
}