#include <stdio.h>
#include <math.h>
int main(void){
    int n;
    double x1, y1, x2, y2, x3, y3, x4, y4;
    double v1, v2, v3, v4;
    double cross;
    scanf("%d", &n);
    for(int i=0; i<n; i++){
        scanf("%lf %lf %lf %lf %lf %lf %lf %lf", &x1, &y1, &x2, &y2, &x3, &y3, &x4, &y4);
        v1 = x1-x2;
        v2 = y1-y2;
        v3 = x3-x4;
        v4 = y3-y4;
        cross=v1*v4-v2*v3;
        if(cross==0.0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}

