#include <stdio.h>

int main(void){
    int n,i;
    double x[4], y[4], slopeAB, slopeCD;
    
    scanf("%d", &n);
    while(n-- > 0) {
        for(i=0; i<4; i++){
            scanf("%lf%lf", &x[i], &y[i]);
        }
        slopeAB = (y[1]-y[0]) / (x[1]-x[0]);
        slopeCD = (y[3]-y[2]) / (x[3]-x[2]);
        if(slopeAB == slopeCD) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}

