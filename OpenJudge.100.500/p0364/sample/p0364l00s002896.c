#include<stdio.h>

int main(void)
{
    int W, H, x, y,r;

    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);

    if(0 < x - y || x + r < W || 0 < y - r || y + r < H)
      puts("Yes");
    else
      puts("No");

    return 0;
}