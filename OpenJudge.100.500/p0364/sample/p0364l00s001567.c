#include<stdio.h>

int main (void) {
    int w, h, x, y, r;
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);

    int top = y + r;
    int bottom = y - r;

    int right = x + r;
    int left = x - r;

    if(top <= h && bottom >= 0 && right <= w && left >= 0) {
        printf("Yes\n");
    }
    else {
        printf("No\n");
    }
    return 0;
}