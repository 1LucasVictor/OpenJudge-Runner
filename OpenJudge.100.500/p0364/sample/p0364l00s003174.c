#include <stdio.h>

int main(void)
{
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    
    if (x >= -100 && x <= 100 &&
        y >= -100 && y <= 100 &&
        W >= 0 && W <= 100 &&
        y >= 0 && y <= 100 &&
        r >= 0 && r <= 100) {
        if (x - r >= 0 && x + r <= W && y - r >= 0 && y + r <= H) {
            printf("Yes\n");
        } else {
            printf("No\n");
        }
    }

    return 0;
}