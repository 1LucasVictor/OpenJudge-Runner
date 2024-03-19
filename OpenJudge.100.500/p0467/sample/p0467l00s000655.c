
#include <stdio.h>
#include <string.h>
#include <math.h>
#pragma warning(disable : 4996)

int main()
{
    long A, B, C, K;
    long a=0, b=0, c=0;
    int i, j;
    int r;

    scanf("%ld %ld %ld %ld", &A, &B, &C, &K);

    for (i = 0; i < K; i++) {
        if (A > 0) {
            A--;
            a++;
            continue;
        }

        if (B > 0) {
            B--;
            b++;
            continue;
        }

        if (C > 0) {
            C--;
            c++;
            continue;
        }

    }



   
    printf("%ld",a*1+b*0+c*(-1));

    return 0;

}