#include <stdio.h>

int main()
{
    int S, s, m, h;
    scanf("%d", &S);
    s = S%60;
    m = S/60%60;
    h = S/3600;
    printf("%d:%d:%d\n", h, m, s);
    return 0;
}