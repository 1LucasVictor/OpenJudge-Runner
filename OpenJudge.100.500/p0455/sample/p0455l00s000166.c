#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

#define N 100010
#define MAX 1000000000000000000

int main (void)
{
    int a;

    scanf("%d", &a);

    printf("%d", a +(a * a) + (a * a * a));

    return 0;
}
