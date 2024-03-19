#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>

int main(void)
{
    long A, B, C, K;

    scanf("%ld", &A);
    scanf("%ld", &B);
    scanf("%ld", &C);
    scanf("%ld", &K);

    if(K <= A) {
        printf("%ld\n",A);
    } else if(K > A && K <= (A+B)) {
        printf("%ld\n", A);
    } else {
        printf("%ld\n", (A - (K-A-B)));
    }

    return 0;
}