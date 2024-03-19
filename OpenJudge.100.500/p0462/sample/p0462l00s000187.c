#include <stdio.h>

int main(void)
{
    long int a, ans;
    double b;
    scanf("%ld%lf", &a, &b);

    int tmp = b * 100;
    ans = a * tmp;
    printf("%ld\n", ans / 100);
    return 0;
}