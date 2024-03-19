#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>
#define DEBUG

int main()
{
    int a, b;
    //read
    scanf("%d %d", &a, &b);

    //solve
    int ans = (b - (b % a)) / a;
    if((b % a) != 0)
    {
        ans++;
    }

    //write
    printf("%d\n", ans);

    return 0;
}