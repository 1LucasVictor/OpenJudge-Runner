#include <stdio.h>
 
int main() {
    double x, y;
    int a,b,c,d,e,f;
    while(scanf("%d %d %d %d %d %d",&a ,&b ,&c ,&d ,&e ,&f )!=EOF) {
        x = (double)(e*c-b*f) / (double)(a*e-b*d);
        y = (double)(a*f-c*d) / (double)(a*e-b*d);
        printf("%.3f %.3f\n", x , y);
    }
    return 0;
}