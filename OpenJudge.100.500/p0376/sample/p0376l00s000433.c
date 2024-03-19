#include <stdio.h>

int main(int argc, char *argv[])
{
    int values[100];
    int n;
    scanf("%d", &n);
    for (int *elm = values, *const end = elm + n; elm != end; ++elm)
    {
        scanf("%d", elm);
    }
    for (int *elm = values + n - 1, *const end = values - 1; elm != end; --elm)
    {
        printf("%d%c", *elm, elm == values ? '\n' : ' ');
    }
    return 0;
}

