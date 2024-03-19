#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(void) {
    int i;
    double S;
    int count=0, answer;

    scanf("%lf", &S);

    for(i=0; i<3; i++) {
        if((S/pow(10.0, 2-i))>=1) {
            S -= pow(10.0, 2-i);
            count += 1;
        }
    }

    printf("%d \n", count);

    return 0;
}
