#include <stdio.h>

int main(void)
{
    signed int w, h, r;
    int x, y;

    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

    if(x < 0 || y < 0)
        printf("No\n");
    else if(w - r < x || h - r < y)
        printf("No\n");
    else 
        printf("Yes\n");

    return 0;
}