#include <stdio.h>
#include <math.h>

int main()
{
    int a, s;

    scanf("%d", &a);

    s = a + pow(a,2) + pow(a,3);

    printf("%d", s);

    return 0;
}
