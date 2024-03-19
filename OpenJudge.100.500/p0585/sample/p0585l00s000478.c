#include <stdio.h>

int main(int argc, char const *argv[])
{
    float a,b,t;

    scanf("%f %f %f", &a, &b, &t);

    t += 0.5;
    t /= a;
    int m = (int)t;
    printf("%d", (int)b * m );

    return 0;
}