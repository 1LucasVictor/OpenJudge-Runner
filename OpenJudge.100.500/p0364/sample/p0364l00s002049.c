#include <stdio.h>

#define TRUE 1
#define FALSE 0

int check(int W, int H, int x, int y, int r) {
    int up = y + r;
    int low = y - r;
    int left = x - r;
    int right = x + r;
    if (up <= H && low >= 0 && left >= 0 && right <= W) {
        return TRUE;
    }
    else {
        return FALSE;
    }
}

int main() {
    int W, H, x, y, r;
    scanf("%d %d %d %d %d", &W, &H, &x, &y, &r);
    if (check(W, H, x, y, r))
        printf("Yes\n");
    else
        printf("No\n");
    return 0;
}
