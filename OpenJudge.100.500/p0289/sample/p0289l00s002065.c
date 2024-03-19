#include <stdio.h>
int gcd(int, int);
void swap(int *, int *);
int main()
{
    int x, y, result;
    scanf("%d%d", &x, &y);
    result = gcd(x, y);
    printf("%d\n", result);
}
int gcd(int x, int y)
{
    int r;
    if (x < y)
        swap(&x, &y);
    while (y > 0)
    {
        r = x % y;
        x = y;
        y = r;
    }
    return x;
}
void swap(int *x, int *y)
{
    int z;
    z = *x;
    *x = *y;
    *y = z;
}
