#include <stdio.h>
 
int main(void)
{
    int n;
    int ii;
    int i;
    float k1, k2;
    float x[4], y[4];
     
    scanf("%d", &n);
    for (ii = 0; ii < n; ii++){
        for (i = 0; i < 4; i++){
            scanf("%f %f", &x[i], &y[i]);
        }
        k1 = (y[1] - y[0]) / (x[1] - x[0]);
        k2 = (y[3] - y[2]) / (x[3] - x[2]);
         
        if (k1 == k2){
            printf("YES\n");
        }
        else {
            printf("NO\n");
        }
    }
     
    return (0);
}