#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#define ll long long

int main(void)
{
    //a + b = x
    //2a + 4b = y;
    //2b = y -2x;
    //2a = 4x - y;
    int x, y;
    int a, b;
    scanf("%d %d", &x, &y);
    b = (y - 2 * x) >> 1;
    a = (4 * x - y) >> 1;
    if (((a + b) == x) && ((2 * a + 4 * b) == y) && a >= 0 && b >= 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}