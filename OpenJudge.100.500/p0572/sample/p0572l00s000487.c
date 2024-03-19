#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main()
{
    long int l, r, i, j=LONG_MAX, ans, k, con=2*1000*1000*1000;
    
    scanf("%ld %ld", &l, &r);
    
    for (i=l; i<j; i++) {
        for (j=i+1; j<=r; j++) {
            ans=(i*j)%2019;
            if (ans!=0) {
                con=fmin(ans, con);
            } else {
                break;
            }
        }
    }
    
    printf("%ld", con);
    
    return 0;
}


