#include <stdio.h>
#define FOR(variable,a,b) for(variable=(a);variable<(b);variable++)

int main(){
    // import phase
    int a, b, c, d, e, f;
    double x, y;
    
    // calclate phase
    while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
        // ax + by = c
        // dx + ey = f
        // http://www.usamimi.info/~geko/arch_acade/elf001_simult/index.xml

        x = (c*e-b*f) / (a*e-b*d);
        y = (f*a-c*d) / (a*e-d*b);
        
        printf("%.3lf %.3lf\n", x, y);
    }
    return 0;
}