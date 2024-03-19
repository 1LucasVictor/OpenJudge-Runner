#include <stdio.h>

int checkNum(int, int);

int main(void)
{
    char *result = "NO";
    int sum = 0;
    int x, y, z;

    scanf("%d%d%d", &x, &y, &z);

    sum = checkNum(x, sum);
    sum = checkNum(y, sum);
    sum = checkNum(z, sum);

    if (sum == 17)
    {
        result = "YES";
    }
    puts(result);
    return 0;
}

int checkNum(int a, int b)
{
    switch (a)
    {
    case 5:
    case 7:
        b += a;
        break;
    defailt:
        break;
    }
    return b;
}