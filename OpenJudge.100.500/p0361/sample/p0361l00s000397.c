#include<stdio.h>

int main()
{
    int S;
    int h;
    int m;
    int s;

    scanf("%d\n", &S);
    h = S / 3600;
    m = (S / 60);
    m = m - (h * 60);
    s = S - (h * 3600) - (m * 60);

    printf("%d:%d:%d\n", h, m, s);
    return 0;
}

    