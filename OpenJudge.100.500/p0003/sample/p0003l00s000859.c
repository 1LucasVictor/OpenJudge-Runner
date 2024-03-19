#include<stdio.h>

int main(void){
    float a, b, c, d, e, f, x, y;
    while(scanf("%f %f %f %f %f %f", &a, &b, &c, &d, &e, &f) != EOF){
        y = (c*d-a*f)/(b*d-a*e);
        x = (c*e-b*f)/(a*e-b*d);
               
        printf("%.3f %.3f\n", x, y);
    }
    return 0;
}
