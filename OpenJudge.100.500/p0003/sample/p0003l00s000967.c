#include <stdio.h>
#define FOR(variable,a,b) for(variable=(a);variable<(b);variable++)

int main(){
    // import phase
    int a, b, c, d, e, f;
    float result[2];
    
    // calclate phase
    while(scanf("%d %d %d %d %d %d", &a, &b, &c, &d, &e, &f) != EOF) {
        result[0] = (c*e-b*f) / (a*e-b*d);
        result[1] = (f*a-c*d) / (a*e-d*b);
        
        printf("%.3f %.3f\n", result[0], result[1]);
    }
    return 0;
}