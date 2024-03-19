#include <stdio.h>

int main()
{
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (a < b)
        printf("dangerous\n");
    else {
        if (a == b + c)
            printf("delicious\n");
        else
            printf("safe\n");
    }
    return 0;
}
