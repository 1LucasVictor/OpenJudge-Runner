#include <stdio.h>

int main()
{

    int s;
    scanf("%d", &s);
    int c, d;
    scanf("%d %d", &c, &d);

    if (d/s!=(c-1)/s)
    {
        printf("OK");
    }
    else
        printf("NG");

    printf("\n");
}