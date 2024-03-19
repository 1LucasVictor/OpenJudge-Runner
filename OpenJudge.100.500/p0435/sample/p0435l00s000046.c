#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(void){

    long int i, n, d, x, y, count=0;
    double a;

    scanf("%ld%ld",&n,&d);

    for(i=0;i<n;i++){
        scanf("%ld%ld",&x,&y);

        x*=x;
        y*=y;

        a = sqrt(x+y);
        if(a<=d){
            count++;
        }
    }

    printf("%ld",count);

    return 0;
}