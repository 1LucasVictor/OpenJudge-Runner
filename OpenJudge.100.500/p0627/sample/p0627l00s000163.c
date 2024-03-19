#include <stdio.h>

int main(void)
{
    int A, B;
    int sum, diff, prod;
    scanf("%d%d", &A, &B);

    sum = A + B;
    diff = A - B;
    prod = A * B;

    printf("%d\n", prod>(sum>diff ? sum:diff) ? prod:(sum>diff ? sum:diff) );


    return 0;
}
