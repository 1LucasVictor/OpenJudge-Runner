#include <stdio.h>
#pragma warning(disable:4996)

int main()
{
    int a, h, b, c;
    scanf("%d %d", &h, &a);
    b = h % a;
    c = h / a;
    if (b != 0) {
        printf("%d", c + 1);
    }
    else {

        printf("%d", c);
    }
    return 0;
}